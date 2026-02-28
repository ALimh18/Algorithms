#include <iostream>
using namespace std;

void Print(int n) 
{
    if (n == 0)
        return;
    cout << "I love Recursion" << endl;
    Print(n - 1);
}

int main() 
{
    int N;
    cin >> N;
    Print(N);
    return 0;
}
