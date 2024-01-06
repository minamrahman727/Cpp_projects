#include<iostream>
using namespace std;
int main()
{
	float fah,cel;
	cout<<"\n\t\t\t\tconvert fahrenheit into celsius";
	cout<<"\n\t\t\t\t*******************************";
	cout<<"\nenter temprature in fahrenheit\t("<<char(248)<<"F)";cin>>fah;
	cel=(fah-32)*5/9;
	cout<<"converted temprature in celsius is______________________\a"<<cel<<char(248)<<"C";
	return 0;
}
