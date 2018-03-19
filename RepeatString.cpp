#include <stdio.h>
#include <iostream>
using namespace std;
class RepeatString
{
int n,i,a=0;
string s;
void get()
{
    cout<<"INPUT"<<endl;
    getline(cin,s);
    cin>>n;
}
void display()
{
    cout<<"OUTPUT"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<s<<endl;
    }
}
public:
RepeatString()
{
    get();
    display();
}
};
int main()
{
RepeatString rs;
return 0;
}
