#include <iostream>
#include <math.h>
using namespace std;
class Begin83
{
private:
int n1,n2,n1a[1000],n2a[1000],i,c1=0,c2=0,c=0;
string s;
char ch;
bool n2b;
public:
Begin83()
{
while(c<3)
{
n1=0;
n2=0;
c1=0;
c2=0;
n2b=false;
getline(cin,s);
for(i=0;i<s.length();i++)
{
if(s[i]=='/'||s[i]=='%')
{
ch=s[i];
n2b=true;
}
if(n2b)
{
if(s[i]!=' ')
{
n2a[c2]=s[i]-'0';
c2++;
}
}
else
{
if(s[i]!=' ')
{
n1a[c1]=s[i]-'0';
c1++;
}
}
}
for(i=0;i<c1;i++)
{n1+=n1a[i]*pow(10,c1-i-1);}
for(i=1;i<c2;i++)
{n2+=n2a[i]*pow(10,c2-i-1);}
switch(ch)
{
case '/':cout<<n1/n2<<"\n";break;
case '%':cout<<n1%n2<<"\n";break;
}
c++;
}
}
};
int main()
{
Begin83 b;
return 0;
}
