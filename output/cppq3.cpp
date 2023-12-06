#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int max(int arr[]){
    int k=0;
    for(int i=0;i<100;i++){
        if(arr[i]>k) arr[i]=k;
    }
    return k;
}
int main(){
    string code;
     int ca,ma,mt,mc,mg,ct,cc,cg;
        ma=mc=mt=mg=ca=ct=cc=cg=0;
    cin >> code;
    for(long long int i=0; i < code.length()-1; i++){
        if(code[i+1]==code[i] && code[i]=='A'){ int k=0;
            ca += 1;
            ma = max(ma,ca);
        }
        else ca = 0;
        if(code[i+1]==code[i] && code[i]=='T'){
            ct += 1;
            mt = max(mc,ct);
        }
        else ct = 0;
        if(code[i+1]==code[i] && code[i]=='C'){
            cc += 1;
            mt = max(mt,cc);
        }
        else cc = 0;
        if(code[i+1]==code[i] && code[i]=='G'){
            cg += 1;
            mg = max(mg,cg);
        }
        else cg = 0;
    }
    long long int k1 = max(ma,mt);
    long long int k2 = max(mc,mg);
    long long int k = max(k1,k2);
    cout << k+1;
}