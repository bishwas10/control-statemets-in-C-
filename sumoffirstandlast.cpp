#include <iostream>
using namespace std;
int main ()
{
    int n , first, last , sum;
    cout << "Input the digits :" << endl;
    cin >> n;
    last = n%10;
    while ( n >10)
    {
        n = n/10;
        first = n;
    }
    sum = first +last;
    cout << "The sum of first and last digit is " << sum << endl;

    return 0;
}