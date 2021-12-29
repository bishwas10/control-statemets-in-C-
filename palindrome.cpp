#include <iostream>
using namespace std;
int main ()
{
    int n,i,rem,rev =0,m;
    cout << "Enter the number" << endl;
    cin >> n;
    m = n;
    while (n >0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    if (m==rev)
    {
        cout << "It is a palindrome number" << endl;

    }
    else
    {
        cout << "It is not a palindrome number" << endl;
    }


    return 0;
}
