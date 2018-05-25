#include <iostream>
#include <string>
using namespace std;
class Begin81
{
private:
int n1,n2,c;
public:
void calc()
{
while(true)
{
cin>>n1>>n2;
c=(n1>n2)?(n1-n2):(n2-n1);
cout<<c<<"\n";
}
}
Begin81()
{
calc();
}
};
int main()
{
Begin81 b;
return 0;
}
