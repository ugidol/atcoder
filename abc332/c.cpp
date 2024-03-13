#include <bits/stdc++.h>
using namespace std;
vector<int> f(string& s, int &l, int &r){
  vector<int> vec(3);
  for(int i=l;i<r;i++){
    char c = s[i];
    vec[ c - '0' ] += 1;
  }
  return vec;
}
int main(void){
  int N,M;
  cin >> N >> M;
  string S;
  cin >> S;
  S.push_back('0');
  //
  int ans = 0;
  int left = 0;
  int right = 0;
  while(left<N){
    right = left;
    while(S[right]!='0'){
      right += 1;
    }
    vector<int> v = f(S,left,right);
    fprintf(stderr,"%d,%d\n",v[1],v[2]);
    ans = max(ans,(v[2] + max(0,v[1] - M) ));
    left = right + 1;
  }
  cout << ans << endl;
  return 0;
}
