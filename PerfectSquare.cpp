#include <iostream>
using namespace std;
class PerfectSquare
{
int i,ch=0,c,n,s;
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>n>>s;
}
void chck()
{
c=(n>s)?n:s;
cout<<"OUTPUT"<<endl;
for(i=1;i<=c;i++)
{
if((n*s)%i==0)
{
int t=(n*s)/i;
if(t==i)
{
cout<<"yes"<<endl;
ch++;
}
}
}
if(ch==0)
{
cout<<"no"<<endl;
}
}
};
int main()
{
PerfectSquare n;
n.get();
n.chck();
return 0;
}
