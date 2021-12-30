#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main ()
{
    char a[20];
    int i , len,value;
    long n =0;
    cout <<"Enter the number in binary :" << endl;
    cin >> a;
    len = strlen(a);
    len--;
    for (i =1;i <=len;i++)
    {
        value = a[i]-48;
        n = n+value * pow (2,len-i);
    }
    cout << "Decimal Euivalent = " << n << endl;

    return 0;
}