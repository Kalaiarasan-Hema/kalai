#include <iostream>
using namespace std;
class BitSwap2{
private:
    int x,y,z;
    int get()
    {
        cout<<"INPUT"<<endl;
        cin>>x>>y;
        return 0;
    }
    int calc()
    {
        cout<<"OUTPUT"<<endl;
        if(x<=100000 && y<=100000)
     {
     x=x^y;
     y=x^y;
     x=x^y;
     cout<<x<<endl<<y;}
     return 0;
    }
    public:
    BitSwap2()
    {
    get();
    calc();
    }
};
int main()
{
    BitSwap2 s;
    return 0;
}
