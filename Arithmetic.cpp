#include <iostream>
using namespace std;
class Arithmetic
{
int n,a,d,i,ar[1000],c=0;
public:
Arithmetic()
{
get();
sum();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>n>>a>>d;
}
void sum()
{
ar[0]=a;
for(i=0;i<n;i++)
{
ar[i+1]=ar[i]+d;
}
}
void display()
{
cout<<"OUTPUT"<<endl;
for(i=0;i<n;i++)
{
c=c+ar[i];
}
cout<<c;
}
};
int main()
{
Arithmetic ip;
return 0;
}
