#include <iostream>
#include<math.h>
using namespace std;
class KCharacters
{
    int i,k;
    string s;
    void get()
    {
    cout<<"INPUT"<<endl;
    getline(cin,s);
    cin>>k;
    }
    void prnt()
    {
    cout<<"OUTPUT"<<endl;
    for(i=0;i<k;i++)
    {
    cout<<s[i];    
    }
    }
    public:
    KCharacters()
    {
    get();
    prnt();
    }
};
int main()
{
KCharacters me;
return 0;
}
