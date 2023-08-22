#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<int,int> mp;
  map<int,multiset<int>> mp2;
  for(int i=0;i<N;i++){
    int F,S;
    cin >> F >> S;
    if ( mp[F] < S ) {
      mp[F] = S;
    }
    mp2[F].insert(S);
    if ( mp2[F].size() > 2 ) {
      mp2[F].erase(mp2[F].begin());
    }
  }
  multiset<int> mp3;
  for(auto itr : mp){
    mp3.insert( itr.second );
    if ( mp3.size() > 2 ) {
      mp3.erase(mp3.begin());
    }
  }
  int a = 0;
  for(auto itr : mp3){
    a += itr;
  }
  //
  int b = 0;
  for(auto itr : mp2){
    int f,v1,v2;
    f = itr.first;
    if ( itr.second.size() < 2 ) {
      continue;
    }
    int sm = 0;
    auto itr2 = itr.second.begin();
    v1 = *itr2;
    sm += ( v1 / 2 );
    advance(itr2,1);
    v2 = *itr2;
    sm += v2;
    b = max(b,sm);
#ifdef DEBUG
    fprintf(stderr,"f=[%d],v1=[%d],v2=[%d]\n",f,v1,v2);
#endif
  }
  int ans = max(a,b);
  cout << ans << endl;
  return 0;
}
