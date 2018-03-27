#include <iostream>
using namespace std;
class Palindrome
{
int n,i=0,j=0,ar[5];
string s;
public:
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
bool chck()
{
i=s.length();
cout<<"OUTPUT"<<endl;
for(int j=0;j<i;j++)
{
i--;
if(s[j]!=s[i])
{
return false;
}
}
return true;
}
};
int main()
{
Palindrome n;
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
