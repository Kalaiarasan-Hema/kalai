#include <iostream>
using namespace std;
class CountNumbers2
{
int s,c=0;
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
    c++;
    s=s/10;
    }
    cout<<c;
  }
};
int main()
{
CountNumbers2 nr;
nr.get();
    nr.count();
return 0;
}
