// to read 10 numbers  and sort them in ascending order
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{  
  int N[10];
  int a;
//reading elements

  cout<<"enter elements in array: \n";
  for(a=0; a<=9; a++)
{
  cin>>N[a];
}
//sorting in ascending order
  sort(N,N+10);
// print sorted array in acsending order
  cout<<"Elements of array sorted in acsending order"<<endl;
  for(a=0;a<=9;a++)
{
  cout<<N[a]<<endl;
}
  return 0;
}

