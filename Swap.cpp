#include <iostream>
using namespace std;
class Swap
{
int a,b,c;
public:
Swap()
{
get();
sw();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>a>>b;
}
void sw()
{
c=a;
a=b;
b=a;
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<a<<" "<<b;
}
};
int main()
{
Swap s;
return 0;
}
