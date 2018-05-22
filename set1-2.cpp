#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num,n,n1,count=0,len,length,out;
  cin>>num>>n;
  n1=num;
  while(n1>0)
  {
      n1=n1/10;
      count++;
  }
  len=count-n;
  length=pow(10,len);
  out=num%length;
  cout<<out;
  return 0;
}
