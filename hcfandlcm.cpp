#include <iostream>
using namespace std;
int main ()
{
    int m ,n,min,hcf,lcm;
    cout << "Enter the first number" << endl;
    cin >> m;
    cout << "Enter the second number" << endl;
    cin >> n;
    min = (m <n)?m:n;
    for (int i =1;i <=min;i++)
    {
        if (m%i==0 && n % i ==0)
        {
        hcf= i;
        }
    }
   lcm = (m*n)/hcf;
   cout << "H.C.F of two number is " << hcf <<endl;
   cout << "L.C.M of two number is " << lcm <<endl;
   return 0;
}