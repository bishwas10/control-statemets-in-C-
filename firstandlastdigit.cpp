 /*Write a program in C++ to find the first and last digit of a number. Go to the editor
Sample Output:
Input any number: 5679
The first digit of 5679 is: 5
The last digit of 5679 is: 9 */
#include <iostream>
using namespace std;
int main ()
{
   int n,first,last;
    cout << "\n\n Find the first and last digit of a number:\n";
    cout << "-----------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
   
	last=n % 10;
	while (n >10)
    {
        n = n/10;
        first = n;
    }
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
return 0;
}