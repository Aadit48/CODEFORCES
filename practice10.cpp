#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m,k,count=0;
    cin>>n>>m>>k;
    int arr[n],rra[m];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int j=0;j<m;j++){
      cin>>rra[j];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if((arr[i]+rra[j])<=k){
          count++;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}