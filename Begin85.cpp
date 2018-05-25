#include <iostream>
#include <math.h>
using namespace std;
class Begin85
{
private:
int n,c1=0,c2=0,i;
string s,s1,s2;
bool n2b;
public:
Begin85()
{
getline(cin,s);
for(i=0;i<s.length();i++)
{
if(i%2==0)
{
s1[c1]=s[i];
c1++;
}
else
{
s2[c2]=s[i];
c2++;
}
}
for(i=0;i<c1;i++)
{cout<<s1[i];}
cout<<" ";
for(i=0;i<c2;i++)
{cout<<s2[i];}
}
};
int main()
{
Begin85 b;
return 0;
}
