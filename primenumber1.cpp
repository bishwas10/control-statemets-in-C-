#include <iostream>
using namespace std;
int main()
{
 int n,i;
 cout <<"Enter the number "<< endl;;
 cin >>n;
 i=2;
 while(i<n/2)
 {
 if(n%i==0)
 {
 cout << "It is not a prime number" << endl;
 break;
 }
 i=i+1;
 }
 if(i==n/2)
cout << "It is a prime4 number " << endl;
 return 0;
