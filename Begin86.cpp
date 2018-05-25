#include <iostream>
#include <math.h>
using namespace std;
class Begin86
{
private:
int j,i;
bool fn=true;
string s;
bool n2b;
public:
Begin86()
{
getline(cin,s);
for(i=0;i<s.length();i++)
{
for(j=0;j<s.length();j++)
{
if(i!=j)
{
if(s[i]==s[j])
{fn=false;}
}
}
}
if(fn)
{cout<<"yes";}
else
{cout<<"no";}
}
};
int main()
{
Begin86 b;
return 0;
}
