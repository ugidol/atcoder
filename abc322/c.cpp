#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<int> vec(N+1,1e6);
  vector<int> A(M);
  for(auto &itr:A){
    cin >> itr;
    vec[itr] = 0;
  }
  int p = 0;
  for(int i=0;i<N;i++){
    int idx = N - i;
    int v = vec[idx];
    if ( v == 0 ) {
      p = 0;
    }
    else {
      p += 1;
    }
    vec[idx] = p;
  }
  for(int i=0;i<N;i++){
    cout << vec[i+1] << endl;
  }
  return 0;
}
