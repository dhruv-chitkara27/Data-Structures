#include<iostream>
using namespace std;
int main()
{
 int i,j,n,arr[10];
 int sl=0,sr=0,p=0,flag=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
      if(i<j)
        sr=sr+arr[j];
      if(i>j)
        sl=sl+arr[j];
      if(sl==sr)
        p=arr[i];
    }
    if(sl==sr)
    {
      cout<<"YES at "<<p;
      flag=1;
      p=0;
    }
    sl=0;
    sr=0;
}
if(flag==0)
{
    cout<<"No such element exists ";
}
 return 0;
}
