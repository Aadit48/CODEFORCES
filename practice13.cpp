#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int count=0,flag=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int j=0;j<n;j++){
      cin>>b[j];
    }
    for(int i=0;i<n;i++){
      if(a[i]==b[i]){
        count++;
      }
    }
    for(int i=0;i<n;i++){
      if(a[i]==b[n-i-1]){
        flag++;
      }
    }
    if(count==n || flag==n){
      cout<<"Bob"<<endl;
    }
    else{
      cout<<"Alice"<<endl;
    }
  }
  return 0;
}