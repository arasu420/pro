#include <iostream>
using namespace std;
int main()
{
  int a,b,i,count=0;
  string s1,s2;
  cin>>s1>>s2;
  a=s1.length();
  b=s2.length();
  if(a<b)
  {
      a=b;
  }
  for(i=0;i<a;i++)
  {
      if(s1[i]!=s2[i])
      {
          count++;
      }
  }cout<<count;
  return 0;
}
