#include<iostream>
using namespace std;
int main()
{
	float n1,n2,add,sub,mul,div;
	cout<<"enter first value";cin>>n1;
	cout<<"enter second value";cin>>n2;
	
//addition
	add=n1+n2;
	cout<<"\nyour sum is\t"<<add;
//subtraction
		sub=n1-n2;
	cout<<"\nyour value after subtraction is\t"<<sub;
//multiplication
		mul=n1*n2;
	cout<<"\nyour product is\t"<<mul;	
//divide
		div=n1/n2;
	cout<<"\nyour value after division is\t"<<div;
	
return 0;	
}
