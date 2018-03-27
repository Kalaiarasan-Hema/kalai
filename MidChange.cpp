#include <iostream>
using namespace std;
class MidChange
{
string d;
int n,i;
public:
MidChange()
{
get();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>d;
}
void display()
{
cout<<"OUTPUT"<<endl;
n=d.length();
d[(n/2)]='*';
if(!(n%2))
{
d[(n/2)-1]='*';
}
cout<<d;
}
};
int main()
{
MidChange ip;
return 0;
}
