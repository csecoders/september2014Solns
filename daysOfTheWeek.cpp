#include <iostream>

using namespace std;

int main()
{
    int n;
    char ar[7][15] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cin>> n;
    cout<<ar[n-1];
   return 0;
}

