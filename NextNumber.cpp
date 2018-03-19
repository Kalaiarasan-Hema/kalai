#include <iostream>
using namespace std;
class NextNumber
{
int s,c=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s;
	}
void put()
{
    cout<<"OUTPUT"<<endl<<s+1;
  }
};
int main()
{
NextNumber nr;
nr.get();
nr.put();
return 0;
}
