#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    while(n--){
        long long int a,b;
        cin >> a >> b;
        long long int k=a,l=b;
        k = k % 3;
        l = l % 3;
        if(a > 2*b || b > 2*a) cout << "NO"<<"\n";
        else if(k==0 && l==0) cout << "YES"<< "\n";
        else if(k==0 && l>0) cout << "NO"<< "\n";
        else if(l==0 && k>0) cout << "NO"<< "\n";
        else if(k==1 && l==1) cout << "NO"<< "\n";
        else if(k==1 && l==2) cout << "YES"<< "\n";
        else if(k==2 && l==1) cout << "YES"<< "\n";
        else if(k==2 && l==2) cout << "NO"<< "\n";
    }
}