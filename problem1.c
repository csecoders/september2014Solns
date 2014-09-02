#include<stdio.h>

int main()
{
    //Gets the input string
    char inputString[25];
    //Array to hold the occurances
    int alphabets[26] = {0};
    int i, flag = 0;
    //Get the input from the user
    gets(inputString);
    //Iterate over each character in the input string and increase
    //its corresponding occurance array element by 1.
    for (i = 0; inputString[i] != '\0'; i++)
    {
        alphabets[(int)(inputString[i] – ‘a’)]++;
    }
    //Check for characters with odd no. of occurances
    for(i = 0; i < 26; i++)
    {
        if((alphabets[i] % 2) != 0)
        {
            flag++;
        }
    }
    //Dislay possible if less than 1 character with
    // odd number of occurances.
    if(flag > 1)
    {
        printf(“Not possible”);
    }
    else
    {
        printf(“Possible”);
    }
    return 0;
   }
