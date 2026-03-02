#include <iostream>
using namespace std;

void print(int arr[],int s,int index)
{
    if(index > s-1){return;}
    print(arr,s,index+2);
    cout<<arr[index]<<" ";

}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    print(arr,s,0);

}
