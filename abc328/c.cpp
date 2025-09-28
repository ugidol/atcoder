
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector<int> ary(N,0);
  for(int i=1;i<N;i++){
    char prev = S[i-1];
    char c = S[i];
    if ( prev == c ) {
      ary[i] = ary[i-1]+1;
    }
    else {
      ary[i] = ary[i-1];
    }
  }
  vector<int> ans(Q);
  for(int i=0;i<Q;i++){
    int l,r;
    cin >> l >> r;
    ans[i] = ary[r-1] - ary[l-1];
  }
  for(int i=0;i<Q;i++){
    cout << ans[i] << endl;
  }
  return 0;
}
