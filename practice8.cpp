#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m;
    cin>>n>>m;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    long long maxvalue=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]>maxvalue){
        maxvalue=arr[i];
      }
    }
    for(int j=1;j<=m;j++){
      char ch;
      cin>>ch;
      long long l,r;
      cin>>l>>r;
      if(maxvalue<=r && maxvalue>=l && ch=='+'){
        maxvalue++;
      }
      else if(maxvalue<=r && maxvalue>=l && ch=='-'){
        maxvalue--;
      }
      cout<<maxvalue<<endl;
    }
  }
  return 0;
}