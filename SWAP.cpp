#include <iostream>
using namespace std;
class SWAP
{
int a,b;
public:
void get()
{
cout<<"Input:"<<endl;
cin>>a>>b;
}
void swap()
{
int s=a;
a=b;
b=s;
cout<<"Output:"<<endl<<a<<" "<<b;
}
};
int main() {
SWAP n;
n.get();
n.swap();
return 0;
}
