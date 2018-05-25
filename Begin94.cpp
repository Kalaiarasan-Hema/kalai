#include <iostream>
using namespace std;
int main() 
{
int n,k,ar[1000];
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<ar[k-1];
return 0;
}
