#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  char c;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    char arr[n][4];
    for(int i=0;i<n;i++){
      for(int j=0;j<4;j++){
        cin >> arr[i][j];
      }
    }
    for(int i=n-1;i>=0;i--){
      for(int j=3;j>=0;j--){
        if(arr[i][j]=='#'){
          cout << j+1 << endl;
        }
      }
    }
  }
  return 0;
}
