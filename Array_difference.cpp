#include<iostream>
using namespace std;
int main()
{
int n,arr[50],diff=-1;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
for (int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
  if(diff<arr[j]-arr[i])
  {
    diff=arr[j]-arr[i];
  }

 }
}
  cout<<diff;
  return 0;
}
