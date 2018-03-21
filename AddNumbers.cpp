#include <iostream>
using namespace std;
class AddNumbers
{
int i,s,c=0,ar[1000];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s;
	}
void count()
{
cout<<"OUTPUT"<<endl;
while(s%10)
{
    ar[c]=s%10;
    c++;
    s=s/10;
    }
  }
void display()
{
s=0;
for(i=c-1;i>=0;i--)
{
s=s+ar[i];
}
cout<<s;
}
};
int main()
{
AddNumbers nr;
nr.get();
    nr.count();
    nr.display();
return 0;
}
