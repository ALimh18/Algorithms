#include <iostream>
using namespace std;

int s;
long long  sum(long long  arr[])
{
    if(s==0){return 0;}
    return arr[--s]+sum(arr);

}
int main()
{
    cin>>s;
    long long arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr);
    
}
