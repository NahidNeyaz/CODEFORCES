#include<bits/stdc++.h>
using namespace std;




void solve(int a, int b, int c)
{
  if((a+b==c)||(a+c==b)||(b+c==a))
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  return;
}
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++)
    {
    cin>>a>>b>>c;
    solve(a,b,c);
    }
    return 0;
}