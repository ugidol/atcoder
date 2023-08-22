#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M ;
  vector<string> C(N);
  for(int i=0;i<N;i++){
    string c;
    cin >> c ;
    C[i] = c;
  }
  map<string,int> mp;
  for(int i=0;i<M;i++){
    string k ;
    cin >> k ;
    mp[k] = i+1;
  }
  vector<int> vec(M+1);
  for(int i=0;i<=M;i++){
    int v;
    cin >> v;
    vec[i] = v;
  }
  int ans = 0;
  for(auto c : C ) { 
    ans += vec[ mp[c] ] ;
  }
  cout << ans << endl;
  return 0;
}
