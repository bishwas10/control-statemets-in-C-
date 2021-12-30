#include <iostream>
using namespace std;
int main()
{
    int n ,rem,weight =1;
    long long binarynumber =0;
    cout << "Enter the decimal number " << endl;
    cin >> n;
    while (n !=0)
    {
        rem = n %2;
        n = n/2;
        binarynumber = binarynumber+ rem*weight; 
        weight = weight *10;
        
    }
    cout << "Binary Equivalent is :"<< binarynumber << endl;
    return 0;
}