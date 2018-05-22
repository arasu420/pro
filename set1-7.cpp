#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,a,b,c=0,count=0,z=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
     a=pow(2,i);
     if(n==a)
     {
         c++;
     }
 }
 if(c==1)
 {
     cout<<z;
 }
 else
 {
  while(n>0)
  {
      b=n%2;
      if(b==1)
      {
          count++;
      }
      n=n/2;
  }cout<<count;
 }return 0;
}
