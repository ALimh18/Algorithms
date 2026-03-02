#include <iostream>
using namespace std;

int index=0;
void print(string n)
{
    if (index==n.size()){return;}
    cout<<n[index]<<" ";
    index++;
    return print(n);
}
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        string n;
        cin>>n;
        print(n);
        cout<<endl;
        index=0;
    }
    return 0;
}
