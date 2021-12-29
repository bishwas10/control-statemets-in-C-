/* Factorial of number */
#include <iostream>
using namespace std;
int main ()
{
    int fact = 1,i;
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    for (i = 1 ; i <=n;i++)
    {
        fact = fact *i;

    }
    cout << "The factorial of " << n << " is " << fact ;
    return 0;

}