#include <iostream>
using namespace std;
int main()
{
    int n , i, rem, sum=0,m;
    cout << "Enter the number" << endl;
    cin >> n;
    m = n;
    while (n >0)
    {
        rem = n %10;
        sum = sum+rem*rem*rem;
        n = n/10;

    }
    if (sum == m)
    {
        cout << "It is an Armstrong number" << endl;

    }
    else
    {
    cout << "It is not an Armstrong number" << endl;
    }
    return 0;
}