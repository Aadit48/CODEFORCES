#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
      long long n,k;
      cin >> n >> k;
      if((((2*n-k+1)*(k))/2)%2==0){
          cout << "YES" << endl;
      }
      else{
          cout << "NO" << endl;
      }
  }
  return 0;
}