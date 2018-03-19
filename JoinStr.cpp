#include <iostream>
#include <string>
using namespace std;
class JoinStr
{
string s1,s2;
int n,i,n2;
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s1);
getline(cin,s2);
}
void display()
{
s1.append(s2);
cout<<"OUTPUT"<<endl<<s1;
}
public:
JoinStr()
{
get();
display();
}
};
int main()
{
JoinStr js;
return 0;    
}
