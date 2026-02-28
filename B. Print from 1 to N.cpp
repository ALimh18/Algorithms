#include <iostream>

using namespace std;

int counter=1;
void print(int n)
{
    if(n==0){return;}
    cout<<counter++<<endl;
    return print(n-1);
}

int main()
{
    int x;
    cin>>x;
    print(x);
    return 0;
}
