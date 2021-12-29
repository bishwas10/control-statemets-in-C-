#include <iostream>
using namespace std;
int main ()
{
    int m ,n;
    cout << "Enter the first number" << endl;
    cin >> m;
    cout << "Enter the second number" << endl;
    cin >> n;
    while (n!=m)
    {
        if ( m>n)
        {
            m=m-n;
        }
        else
        {
            n= n-m;
        }
    }
    cout << "H.C.F of two number is :" << m;
    return 0;
}