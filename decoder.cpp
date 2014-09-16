#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,strLength,count;
    count = 1;
    char inputString[100];
    cin >> inputString;
    strLength = strlen(inputString);
    char A[3]={'A','B','C'},D[3]={'D','E','F'},G[3]={'G','H','I'},J[3]={'J','K','L'},M[3]={'M','N','O'},P[4]={'P','Q','R','S'};
    char T[3]={'T','U','V'},W[4]={'W','X','Y','Z'};
    for(i = 0; i < strLength; i++)
    {
        if( inputString[i] == inputString[i+1])
            count++;
        else
            {
                switch(inputString[i])
                {
                    case '2':   cout << A[count-1];
                                break;
                    case '3':   cout << D[count-1];
                                break;
                    case '4':   cout << G[count-1];
                               break;
                    case '5':   cout << J[count-1];
                                break;
                    case '6':   cout << M[count-1];
                               break;
                    case '7':   cout << P[count-1];
                                break;
                    case '8':   cout << T[count-1];
                                break;
                    case '9':   cout << W[count-1];
                                break;
                    case '0':   cout << " ";
                                break;
                    default : cout<<"ASDASD";
                }
                count = 1;

            }

    }
}
