#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char ch[10];int a;
	cout<<"type10 characters: ";
	for(a=0;a<10;a++){
		ch[a]=getch();
		cout<<a+1<<" ";
	}
	cout<<"\n\nyour typed character are \t";
	for(a=0;a<10;a++){
		cout<<ch[a];
	}
	return 0;
}
