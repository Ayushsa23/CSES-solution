#include<iostream>
using namespace std;
int main(){ 
    long long int n,k=0;
    cin >> n;
    int num[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (long long int i = 0; i < n - 1; i++)
    {
        if(num[i+1]<num[i]){
            k += num[i]-num[i+1];
            num[i+1]=num[i];
        }
    }
    cout << k;
}