#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n;
    cin >> n;
    int arr[n];
    for (long long i=0;i<n;i++){
      cin >> arr[i];
    }
    long long result = arr[n-2];
    for (long long i=n-3;i>=0;i--){
      result -= arr[i];
    }

    result = arr[n-1]-result;
  

    cout << result << endl;

  }

  return 0;

}
