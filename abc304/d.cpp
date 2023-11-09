#include <bits/stdc++.h>
using namespace std;
int main(void){
  int W,H;
  cin >> W >> H;
  int N;
  cin >> N;
  vector<pair<int,int>> vec(N);
  for(auto &itr:vec){
    cin >> itr.first >> itr.second;
  }
  int AN;
  cin >> AN;
  vector<int> A(AN);
  for(auto &itr:A){
    cin >> itr;
  }
  sort(A.begin(), A.end());
  int BN;
  cin >> BN;
  vector<int> B(BN);
  for(auto &itr:B){
    cin >> itr;
  }
  sort(B.begin(), B.end());
  //
  map<pair<int,int>,int> mp;
  for(int i=0;i<N;i++){
    pair<int,int> p = vec[i];
    auto itr_x = upper_bound(A.begin(), A.end(), p.first);
    int x = distance(A.begin(), itr_x);
    auto itr_y = upper_bound(B.begin(), B.end(), p.second);
    int y = distance(B.begin(), itr_y);
#ifdef DEBUG
    fprintf(stderr,"(%d,%d)={%d,%d}\n",p.first,p.second,x,y);
#endif
    pair<int,int> key = make_pair(x,y);
    mp[key] += 1;
  }
  int m = N+1;
  if ( mp.size() < ( A.size() + 1 ) * ( B.size() + 1 ) ) {
    m = 0;
  }
  int M = 0;
  for(auto itr:mp){
    m = min(m,itr.second);
    M = max(M,itr.second);
  }
  cout << m << ' ' << M << endl;
  return 0;
}
