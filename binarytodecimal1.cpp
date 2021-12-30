#include <iostream>
using namespace std;
int main ()
{
    int binary, decimal = 0,weight =1,rem;
    cout << "Enter the binary number " << endl;
    cin >> binary;
    while (binary !=0)
    {
        rem = binary %10;
        decimal = decimal + rem * weight;
        binary = binary /10;
        weight = weight *2;
    }
    cout << "Decimal Equivalent = " << decimal << endl;
    

    return 0;
}