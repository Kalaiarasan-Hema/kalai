#include <iostream>
#include <iomanip>
using namespace std;
class Begin82
{
private:
double l,b,a;
public:
void calc()
{
cin>>l>>b;
a=l*b*1.00000;
cout<<setprecision(5)<<fixed;
cout<<a;
}
Begin82()
{
calc();
}
};
int main()
{
Begin82 b;
return 0;
}
