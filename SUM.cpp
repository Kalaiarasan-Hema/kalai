#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class SUM
{
    int n,i,j,ar[1000],s,d=0;
    public:
    SUM()
    {
    get();
    sum();
    }
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>n>>s;
    }
    void sum()
    {
    cout<<"OUTPUT"<<endl<<n+s;
    }
};
int main()
{
SUM sa;
return 0;
}
