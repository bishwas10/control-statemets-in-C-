#include <iostream>
using namespace std;
int main()
{
    int num, octal =0 , rem,placevalue =1;
    cout << "Enter the decimal number " << endl;
    cin >> num;
    while (num !=0)
    {
        rem = num %8;
        octal = octal+ rem *placevalue;
        num = num /8;
        placevalue = placevalue*10;
    }
    cout << "Octal Eqivalent = " << octal << endl;

}