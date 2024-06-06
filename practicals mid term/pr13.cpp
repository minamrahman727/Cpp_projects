// to read integer "n" and print factorial of "n"
#include <iostream>
using namespace std;
int main()
{  
 int n,a;
 double fact=1;
	cout<<"\n\t\t Factorial of number";
	cout<<"\n\t\t *******************";
	cout<<"\n\t\t enter any number \t";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
	}
	cout<<"\n\t Factorial of "<<n<<" = "<<fact;
	return 0;
}

