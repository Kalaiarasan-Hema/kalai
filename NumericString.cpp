#include <iostream>
using namespace std;
class NumericString
{
int n,j;
string s;
bool ch=true;
public:
NumericString()
{
get();
chck();
display();
}
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void chck()
{
n=s.length();
for(j=0;j<n;j++)
{
switch(s[j])
{
case '1':break;
case '2':break;
case '3':break;
case '4':break;
case '5':break;
case '6':break;
case '7':break;
case '8':break;
case '9':break;
case '0':break;
default:ch=false;break;
}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
if(ch)
{cout<<"yes";}
else
{cout<<"no";}
}
};
int main()
{
NumericString ns;
return 0;
}
