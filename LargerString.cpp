#include <stdio.h>
#include <iostream>
using namespace std;
class LargerString
{
int n,i,a=0;
string s1,s2;
void get()
{
    cout<<"INPUT"<<endl;
    getline(cin,s1);
    getline(cin,s2);
}
void display()
{
    cout<<"OUTPUT"<<endl;
    for(i=0;i<n;i++)
    {
    if(s1[i]>s2[i])
    {cout<<s1;break;}
    else
    {cout<<s2;break;}
    }
}
public:
LargerString()
{
    get();
    display();
}
};
int main()
{
LargerString rs;
return 0;
}
