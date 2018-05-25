#include <iostream>
using namespace std;
int main() 
{
int n,ar[1000],s=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>ar[i];
s+=ar[i];
}
cout<<s;
return 0;
}
