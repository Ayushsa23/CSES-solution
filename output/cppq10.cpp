#include<iostream>
#include<string>
#include<cmath>
#define MOD 1000000007
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int k=1;
    for (int i = 1; i <= n; i++)
    {
        k *= 2;
        k = k % MOD;
    }
    
    cout << k;
}