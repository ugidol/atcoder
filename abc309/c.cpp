#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,K;
  cin >> N >> K ;
  vector<pair<int,int>> vec(N);
  long sm = 0;
  for(int i=0;i<N;i++){
    int a,b;
    cin >> a >> b ;
    pair<int,int> p = make_pair(a,b);
    vec[i] = p;
    //
    sm += b;
  }
  //
  sort(vec.begin(), vec.end(), [](pair<int,int> &left, pair<int,int> &right){return left.first < right.first;});
  long ans = 0;
  for(auto itr : vec){
    if ( sm <= K ) {
      break;
    }
    sm -= itr.second;
    ans = itr.first;
  }
  ans += 1 ;
  cout << ans << endl;
  return 0;
}
