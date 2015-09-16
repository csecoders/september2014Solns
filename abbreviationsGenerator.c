#include<stdio.h>

int main()
{
    char inputString[] = "Chennai City Traffic Police";
    int i;
    printf("%c", inputString[0]);
    for( i = 0; inputString[i] != '\0'; i++)
    {
        if( inputString[i] == 32 )
        
        {
            while(inputString[i+1]== 32)
                i++;
                
            printf("%c", inputString[i+1]);
        }
    }
    return 1;
}
