#include <iostream>
using namespace std;
class Begin102
{
private:
int k;
public:
Begin102()
{
cin>>k;
while(true)
{
if(k%2)
{
cout<<k;
break;
}
k=k/2;
}
}
};
int main() {
Begin102 b;
return 0;
}
