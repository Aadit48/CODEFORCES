#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long l,r;
    cin>>l>>r;
    long long count=0,i=0;
    while(r-l-(i*(i+1)/2)>=0){
      i++;
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}