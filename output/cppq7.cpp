#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int r=2;
  for (int i = 1; i < n+1; i++)
  {
   long int j = i*i;
    cout << (j*(j-1))/2 - 4*(i-2)*(i-1) <<"\n";
  }

}