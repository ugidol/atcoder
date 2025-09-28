#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n,p;
  cin >> n >> p ;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i];
  }
  //
  int cnt = 0;
  for(int i=0;i<n;i++){
    if ( vec[i] < p ) {
      cnt += 1;
    }
  }
  cout << cnt << endl;
  return 0;
}
