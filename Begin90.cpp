#include <iostream>
#include <math.h>
using namespace std;
class Begin90
{
private:
int j,i;
char ch;
string s;
public:
Begin90()
{
getline(cin,s);
for(i=0;i<s.length();i++)
{
if(s[i]>='0'&&s[i]<='9')
{
cout<<s[i];
}
}
}
};
int main()
{
Begin90 b;
return 0;
}
