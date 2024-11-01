#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long tents;
    if(b%3==0 && c%3==0){
      tents=a+((b+c)/3);
    }
    else if(b%3==0 && c%3!=0){
      tents=a+(b/3)+(c/3)+1;
    }
    else if(b%3==2 && c>=1 && (c-1)%3==0){
      tents=a+((b+1)/3)+((c-1)/3);
    }
    else if(b%3==2 && c>=1 && (c-1)%3!=0){
      tents=a+((b+1)/3)+((c-1)/3)+1;
    }
    else if(b%3==1 && c>=2 && (c-2)%3!=0){
      tents=a+((b+2)/3)+((c-2)/3)+1;
    }
    else if(b%3==1 && c>=2 && (c-2)%3==0){
      tents=a+((b+2)/3)+((c-2)/3);
    }
    else {
      tents=-1;
    }
    cout<<tents<<endl;
  }
  return 0;
}