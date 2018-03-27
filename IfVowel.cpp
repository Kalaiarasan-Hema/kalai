#include <iostream>
using namespace std;
class IfVowel
{
int n,i=0;
bool ch=false;
string s;
public:
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
bool chck()
{
cout<<"OUTPUT"<<endl;
n=s.length();
for(i=0;i<n;i++)
{
switch(s[i])
{
case 'a':ch=true;break;
case 'e':ch=true;break;
case 'o':ch=true;break;
case 'i':ch=true;break;
case 'u':ch=true;break;
}
}
return ch;
}
};
int main()
{
IfVowel n;
n.get();
if(n.chck())
{
cout<<"yes";
}
else
{cout<<"no";
}
return 0;
}
