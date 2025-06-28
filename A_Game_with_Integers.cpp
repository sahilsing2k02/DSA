#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void result()
{
  int n; cin>>n;
  int x = n+1;
  int y = n-1;
  if(n%3 == 0) cout<<"Second"<<endl;

  else if(x%3 == 0 || y%3 == 0){
    cout<<"First"<<endl;
  }

 
}
int main()
{
int t;
cin>>t;
while(t--)
{
result();
}
return 0;
}