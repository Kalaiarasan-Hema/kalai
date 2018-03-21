#include <iostream>
using namespace std;
class NearEven
{
int a;
public:
void get()
{
cout<<"Input:"<<endl;
cin>>a;
if(a<=0)
{
get();
}
if(a>100000)
{
    get();
}
}
void check()
{
    cout<<"Output:"<<endl;
if(a%2==0)
{cout<<a;
}
else
{
cout<<a-1;
}
}
};
int main() {
NearEven n;
n.get();
n.check();
return 0;
}
