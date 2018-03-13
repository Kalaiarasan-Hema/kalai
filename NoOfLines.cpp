#include <iostream>
using namespace std;
class NoOfLines
{
int n,a,d,i,ar[1000],c=1;
string s;
public:
NoOfLines()
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
if(s[i]=='.')
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
NoOfLines nc;
return 0;
}
