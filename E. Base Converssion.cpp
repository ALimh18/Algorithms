#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0){return;}

    print(n/2);

    cout<<n%2;

}
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n;
        cin>>n;
        print(n);
        cout<<endl;
    }
    return 0;
}
