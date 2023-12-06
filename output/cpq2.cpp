#include <iostream>
using namespace std;
long long int sum(long long int n){
    n= n*(n+1);
    return n/2;
}
int main()
{
    long long int n,k=0;
    cin >> n;
    long long int num[n - 1];
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> num[i];
    }
    for (long long int i = 0; i < n - 1; i++)
    {
        k += num[i];
    }
    cout << sum(n)-k;
    }