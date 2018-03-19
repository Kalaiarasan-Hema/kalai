#include <iostream>
#include <string>
using namespace std;
class In1to10
{
int n;
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
}
void check()
{
cout<<"OUTPUT"<<endl;
if(n>=1)
{
if(n<=10)
{
cout<<"yes"<<endl;
}
else
{
cout<<"no"<<endl;
}
}
else
{
cout<<"no"<<endl;
}
}
public:
In1to10()
{
get();
check();
}
};
int main()
{
In1to10 js;
return 0;    
}
