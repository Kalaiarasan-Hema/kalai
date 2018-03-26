#include <iostream>
using namespace std;
class SumOddOrEven
{
int a,b;
public:
void get()
{
cout<<"Input:"<<endl;
cin>>a>>b;
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
if((a+b)%2==0)
{cout<<"Even";
}
else
{
cout<<"Odd";
}
}
};
int main() {
SumOddOrEven n;
n.get();
n.check();
return 0;
}
