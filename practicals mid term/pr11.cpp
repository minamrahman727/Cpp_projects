// to read 10 numbers  and sort them in Decending order
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{  
  int N[10]
  int a;
//reading elements

  cout<<"enter elements in array: \n";
  for(a=0; a<=9; a++)
{
  cin>>N[a]
}
//sorting in decending order
  sort(N,N+10);
// print sorted array in decending order
  cout<<"Elements of array sorted in decending order"<<endl;
  for(a=9;a>=0;a--)
{
  cout<<N[a]<<endl;
}
  return 0;
}

