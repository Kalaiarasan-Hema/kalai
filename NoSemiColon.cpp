#include <iostream>
using namespace std;
class NoSemiColon
{
string s;
public:
void get()
{
cout<<"Input:"<<endl;
getline(cin,s);
}
void prnt()
{
cout<<"Output:"<<endl;
if(cout<<s)
{}
}
};
int main() {
NoSemiColon n;
n.get();
n.prnt();
return 0;
}
