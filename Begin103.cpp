#include <iostream>
using namespace std;
class Begin103
{
private:
int i;
string s;
public:
Begin103()
{
getline(cin,s);
for(i=0;i<s.length();i++)
{
if(i==0)
{
s[0]=toupper(s[0]);
}
if(s[i]==' ')
{
s[i+1]=toupper(s[i+1]);
cout<<s[i];
i++;
}
cout<<s[i];
}
}
};
int main() {
Begin103 b;
return 0;
}
