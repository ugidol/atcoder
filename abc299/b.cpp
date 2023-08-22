#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,T;
  cin >> N >> T;
  vector<int> C(N);
  for(int i=0;i<N;i++){
    int c;
    cin >> c;
    C[i] = c;
  }
  vector<int> R(N);
  for(int i=0;i<N;i++){
    int r;
    cin >> r;
    R[i] = r;
  }
  int U = C[0];
  //
  map<int,int> mp;
  int r_mx = 0;
  int r_mx_2 = 0;
  for(int i=0;i<N;i++){
    int c = C[i];
    int r = R[i];
    if ( c == T ) {
      if ( r_mx < r ) {
        r_mx = r;
        mp[T] = i;
      }
    }
    else if ( c == U ) {
      if ( r_mx_2 < r ) {
        r_mx_2 = r;
        mp[U] = i;
      }
    }
  }
  if ( mp[T] > 0 ) {
    cout << (mp[T]+1) << endl;
  }
  else {
    cout << (mp[U]+1) << endl;
  }
  return 0;
}
