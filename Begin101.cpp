#include <iostream>
using namespace std;
class Begin101
{
private:
int i,k;
string s;
public:
Begin101()
{
cin>>s>>k;
for(i=0;i<k;i++)
{cout<<s[s.length()-k+i];}
}
};
int main() {
Begin101 b;
return 0;
}
