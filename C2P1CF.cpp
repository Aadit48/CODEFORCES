#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k,robingold = 0,people = 0;
    cin >> n >> k;
    int arr[n];
    for (int i=0;i<n;i++){
      cin >> arr[i];
    }
    for (int i=0;i<n;i++){
      if (arr[i]>=k){
        robingold += arr[i];
      }
      else {
        if(robingold!=0 && arr[i]==0){
          robingold--;
          people++;
        }
        else {
        }
      }
    }
    cout << people << endl;
  }
    return 0;
}