#include <iostream>
using namespace std;
class DiffOddOrEven
{
int a,b;
public:
void get()
{
cout<<"Input:"<<endl;
cin>>a>>b;
}
void check()
{
    cout<<"Output:"<<endl;
if((a-b)%2==0)
{cout<<"Even";
}
else
{
cout<<"Odd";
}
}
};
int main() {
DiffOddOrEven n;
n.get();
n.check();
return 0;
}
