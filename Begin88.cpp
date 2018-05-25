#include <iostream>
using namespace std;
class Begin88
{
private:
int n1,n2,i,n;
public:
Begin88()
{
cin>>n1>>n2;
n=(n1>n2)?n1:n2;
for(i=1;i>0;i++)
{
if(((i%n1)==0)&&((i%n2)==0))
{
cout<<i;
break;
}
}
}
};
int main()
{
Begin88 b;
return 0;
}
