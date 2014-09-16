#include <iostream>
#include <string>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while ( testCases-- > 0) {
    string inputString;
    cin >> inputString;
    int alphaCount['z' - 'a' + 1] = {}; // an array with the number of occurrences of each letter
    for (int i = 0; i < inputString.length(); ++i) { // calculate the number od occurreces of each letter
        ++alphaCount[inputString[i] - 'a']; // S[i] - 'a' is the ascii code of the letter S[i]
    }
    bool flag = true;
    for (int i = 0; i <= 'z' - 'a'; ++i) {
        if (alphaCount[i] != i + 1 && alphaCount[i] > 0){
           flag = false; // the array is indexed from 0 but the ascii codes are starting from 1, so we check for cnt[i] != i + 1
        }
    }
    if ( flag == true){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    }
}
