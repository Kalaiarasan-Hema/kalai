#include <iostream>
#include <string>
using namespace std;
class AlphaNos
{
int n,i,c;
string s;
bool nc=false,lt=false;
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
bool chck()
{
n=s.length();
for(i=0;i<n;i++)
{
c=s[i];
if(c>=48&&c<=57)
{
nc=true;
}
if(c>=65&&c<=90)
{
lt=true;
}
if(c>=97&&c<=122)
{
lt=true;
}
}
}
void disp()
{
cout<<"OUTPUT"<<endl;
if(nc&&lt)
{cout<<"yes"<<endl;}
else
{cout<<"no"<<endl;}
}
public:
AlphaNos()
{
get();
chck();
disp();
}
};
int main()
{
AlphaNos a;
return 0;
}
