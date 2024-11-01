#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,sum;
    cin >> n ;
    int arr[n];
    for (int i=0;i<n;i++){
      cin >> arr[i];
    }
    for (int i=0;i<n;i++){
      if (i%2!=0) {
        arr[i] = -arr[i];
      }
    }
    for (int i=0;i<n;i++){
      sum += arr[i];
    }
    cout << sum << endl;
  }
  return 0;
}