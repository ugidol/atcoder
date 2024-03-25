#include <bits/stdc++.h>
using namespace std;
int main(void){
  long N,K;
  cin >> N >> K;
  long sm = 0;
  for(int i=0;i<=K;i++){
    sm += i;
  }
  set<long> st;
  vector<long> A(N);
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    if ( a > K ) {
      continue;
    }
    if ( st.count(a) == 0 ) {
      sm -= a;
      st.insert(a);
    }
  }
  cout << sm << endl;
  return 0;
}
