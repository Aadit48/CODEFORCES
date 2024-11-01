#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,x,y,time;
    cin >> n >> x >> y;
    long long blendingrate = min(x,y);
    if (n%blendingrate==0) {
      time = (n/blendingrate);
    }
    else {
      time = (n/blendingrate) + 1;
    }

    cout << time << endl;

  }

  return 0;

}