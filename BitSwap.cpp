#include <iostream>
using namespace std;
class BitSwap{
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
    BitSwap()
    {
    get();
    calc();
    }
};
int main()
{
    BitSwap s;
    return 0;
}
