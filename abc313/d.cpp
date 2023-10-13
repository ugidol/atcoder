#include <bits/stdc++.h>
using namespace std;
void dump(vector<int> &vec){
#ifdef DEBUG
  for(size_t i=0;i<vec.size();i++){
    fprintf(stderr,"%d,",vec[i]);
  }
  fprintf(stderr,"\n");
#endif
  return ;
}
int main(void){
  int N,K;
  cin >> N >> K ;
  vector<int> A(N);
  vector<int> T(K+1);
  for(int i=0;i<K+1;i++){
    vector<int> vec;
    for(int j=0;j<K+1;j++){
      if ( j == K-i ) {
        continue;
      }
      vec.push_back(j+1);
    }
    cout << '?' << ' ';
    for(int v:vec){
      cout << v << ' ';
    }
    cout << endl << flush;
    int t ;
    cin >> t;
    T[i] = t;
  }
  int sm = 0;
  for(auto t:T){
    sm += t;
    sm %= 2;
  }
  for(int i=0;i<K+1;i++){
    A[i] = (sm + T[K-i])%2;
  }
  function<int(int)> q = [&](int i){
    cout << '?' << ' ';
    for(int j=0;j<K;j++){
      cout << i+j+1 << ' ';
    }
    cout << endl << flush;
    int t ;
    cin >> t;
    return t;
  };
  function<int(int)> qq = [&](int i){
    int t=0;
    for(int j=0;j<K;j++){
      t += A[i+j];
      t %= 2;
    }
    return t;
  };
  for(int i=0;i<(N-(K+1));i++){
    int t = q(2+i);
    int tt = qq(1+i);
#ifdef DEBUG
    fprintf(stderr,"%d,%d\n",t,tt);
#endif
    if ( t == tt ) {
      A[1+i+K] = A[1+i];
    }
    else {
      A[1+i+K] = ( A[1+i] + 1 ) % 2;
    }
  }
  //
  cout << '!' << ' ';
  for(int a:A){
    cout << abs(a) << ' ';
  }
  cout << endl << flush;
  return 0;
}
