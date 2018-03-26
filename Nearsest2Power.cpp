// Example program
#include <iostream>
#include <math.h>
using namespace std;
class Nearsest2Power
{
int n,c=0;
public:
void get()
{
cout<<"Input:"<<endl;
cin>>n;
}
void check()
{
cout<<"Output:"<<endl;
while(n/2)
{
c++;
n=n/2;
}
if(n==0)
{c=-1;}
cout<<pow(2,c+1);
}
};
int main() {
Nearsest2Power n;
n.get();
n.check();
return 0;
}
