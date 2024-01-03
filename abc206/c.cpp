#include <bits/stdc++.h>
using namespace std;

unsigned long long func(int n){
  unsigned long long int ret = 0;
  ret = (1+n) * n / 2;
  return ret;
}

int main(void){
  int n ;
  cin >> n;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int v;
    cin >> v ;
    mp[v] += 1;
  }
  //
  unsigned long long max = func(n-1);
  for(auto it : mp){
    int b = it.second;
    if ( b < 2 ) {
      continue;
    }
    max -= func(b-1);
  }
  cout << max << endl;
  return 0;
}
