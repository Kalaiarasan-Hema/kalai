#include <iostream>
using namespace std;
class SpecialCharacters
{
int n,j,c=0;
string s;
bool ch=true;
public:
SpecialCharacters()
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
case '!':c++;break;
case '@':c++;break;
case '#':c++;break;
case '%':c++;break;
case '$':c++;break;
case '^':c++;break;
case '&':c++;break;
case '_':c++;break;
default:break;
}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<c;
}
};
int main()
{
SpecialCharacters ns;
return 0;
}
