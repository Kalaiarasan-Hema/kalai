#include <iostream>
using namespace std;
class NoOfWords
{
int n,a,d,i,c=1;
string s;
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
if(s[i]==' ')
{c++;}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<c;
}
public:
NoOfWords()
{
get();
count();
display();
}
};
int main()
{
NoOfWords nc;
return 0;
}
