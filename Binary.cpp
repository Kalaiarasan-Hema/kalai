#include <iostream>
#include<math.h>
using namespace std;
class Binary
{
    int i,n;
    string s;
    bool ch=true;
    void get()
    {
    cout<<"INPUT"<<endl;
    getline(cin,s);
    }
    bool chck()
    {
    n=s.length();
    cout<<"OUTPUT"<<endl;
    for(i=0;i<n;i++)
    {
    if(s[i]!='0'&&s[i]!='1')
    {
    ch=false;
    }
    }
    return ch;
    }
    public:
    Binary()
    {
    get();
    if(chck())
    {cout<<"yes"<<endl;}
    else
    {cout<<"no"<<endl;}
    }
};
int main()
{
Binary me;
return 0;
}
