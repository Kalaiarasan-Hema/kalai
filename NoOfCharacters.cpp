#include <iostream>
using namespace std;
class NoOfCharacters
{
int n,a,d,i,ar[1000],c=1;
string s;
public:
NoOfCharacters()
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
for(i=0;i<n-1;i++)
{
if(s[i]==' ')
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
NoOfCharacters nc;
return 0;
}
