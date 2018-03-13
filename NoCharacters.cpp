#include <iostream>
using namespace std;
class NoCharacters
{
int n,a,d,i,ar[1000],c=0;
string s;
public:
NoCharacters()
{
get();
count();
display();
}
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void count()
{
n=s.length();
for(i=0;i<n;i++)
{
if(s[i]!=' ')
{c++;}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<c;
}
};
int main()
{
NoCharacters nc;
return 0;
}
