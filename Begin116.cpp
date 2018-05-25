#include <iostream>
#include <math.h>
using namespace std;
class Begin116
{
private:
int c=0,i,n1,n2,ar[1000];
public:
Begin116()
{
cin>>n1>>n2;
while(n2)
{
ar[c]=n2%10;
n2=n2/10;
c++;
}
while(n1)
{
ar[c]=n1%10;
n1=n1/10;
c++;
}
n1=0;
for(i=c-1;i>=0;i--)
{
n1+=ar[i]*pow(10,i);
}
cout<<n1;
}
};
int main()
{
Begin116 b;
return 0;
}
