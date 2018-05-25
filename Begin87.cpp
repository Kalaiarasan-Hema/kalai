#include <iostream>
using namespace std;
class Begin87
{
private:
int n1,n2,i,k=1,n;
public:
Begin87()
{
cin>>n1>>n2;
n=(n1<n2)?n1:n2;
for(i=2;i<=n;i++)
{
if(((n1%i)==0)&&((n2%i)==0))
{k=i;}
}
cout<<k;
}
};
int main()
{
Begin87 b;
return 0;
}
