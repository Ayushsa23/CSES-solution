#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    if(n==1){
        cout << n;
        return 0;
    }
    else if(n<=3){
        cout << "NO SOLUTION";
        return 0;
    }
    for (long long int i = 5; i <= n; i ++ )
    {
        if(i%2) cout << i << " ";
    }

    cout << "2 4 1 3 ";
    for (long long int i = 6; i <= n; i++)
    {
        if(!(i%2)){
            cout << i << " ";
        }
    }
    
    
    
}