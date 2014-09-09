#include <iostream>

using namespace std;

int main()
{
    int n;
    string result[2] = {"Even", "Odd"};
    cin >> n;
    cout << result[n % 2];
}

/* An alternative approach by Lokeshwaran of CSE A, II year is given below
  #include <iostream>

  using namespace std;

  int main()
  {
    int n = 3;
    while(n%2){
      cout<<"Odd";
      return 0;
    }
    cout<<"Even";
  }

*/

