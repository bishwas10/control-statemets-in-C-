#include <iostream>
using namespace std;
int main ()
{
    int num, temp, rem, i =1,j;
    char hexa[50];
    cout << "Enter the decimal number" << endl;
    cin >> num;
    temp = num;
    while (temp !=0)
    {
        rem = temp %16;
        if (rem <10)
        {
            rem = rem+48;

        }
        else
        {
            rem = rem+55;
            hexa[i++] = rem;
            temp = temp/16; 

        }
        for (j =i-1; j>0;j--)
        {
            cout << "Hexadecimal Equivalent = " << hexa[j];
        }
    }
    return 0;
}