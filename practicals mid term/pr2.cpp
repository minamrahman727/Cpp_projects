#include<iostream>
using namespace std;
int main()
{
	float eng,math,comp,phy,chem,pst,sind,tot,per;
	cout<<"enter marks of english\t";cin>>eng;
	cout<<"enter marks of math\t";cin>>math;
	cout<<"enter marks of computer\t";cin>>comp;
	cout<<"enter marks of physics\t";cin>>phy;
	cout<<"enter marks of chemistry\t";cin>>chem;
	cout<<"enter marks of pst\t";cin>>pst;
	cout<<"enter marks of sindhi\t";cin>>sind;
	
			tot=eng+math+comp+phy+chem+pst+sind;
		per=tot/550*100;
	cout<<"\ayour percentage is\t"<<per<<"\tby securing total of"<<tot;
	if(per>=80)
	cout<<"\nyour grade is A+";
		else if(per>=70)
				cout<<"\nyour grade is A";
					else if(per>=60)
						cout<<"\nyour grade is B";
							else if(per>=40)
									cout<<"\nyour grade is C";
										else 
										cout<<"\nfail";
return 0;
}
