#include <iostream>
#include <math.h>
using namespace std;
class Begin89
{
private:
int j,i;
char ch;
string s;
public:
Begin89()
{
getline(cin,s);
for(i=0;i<s.length();i++)
{
for(j=0;j<s.length();j++)
{
if(i!=j)
{
if(s[i]<s[j])
{
ch=s[i];
s[i]=s[j];
s[j]=ch;
}
}
}
}
for(i=0;i<s.length();i++)
{cout<<s[i];}
}
};
int main()
{
Begin89 b;
return 0;
}
