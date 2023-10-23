#include <bits/stdc++.h>
using namespace std;
typedef  struct _dat {
  long long left;
  long long right;
} D;
bool f1( const D &l, const D &r){
  if ( l.left == r.left ) {
    return l.right < r.right;
  }
  else {
    return l.left < r.left;
  }
}
bool f2( const D &l, const D &r){
  return l.right > r.right;
}
int main(void){
  int N;
  cin >> N;
  vector<D> A(N);
  for(int i=0;i<N;i++){
    long long t,d;
    cin >> t >> d;
    D data;
    data.left = t;
    data.right = t+d;
    A[i] = data;
  }
  sort(A.begin(), A.end(),f1);
  priority_queue<D,vector<D>,function<bool(const D&,const D&)>> Q{f2};
  int ans = 0;
  long long t = 0;
  int i = 0;
  while( i < N || Q.size() > 0 ) {
    while( i < N && A[i].left <= t){
      Q.push(A[i]);
      i++;
    }
    while( Q.size() > 0 && Q.top().right < t ) {
      Q.pop();
    }
    if ( Q.size() == 0 ) {
      t = A[i].left;
    }
    else {
      Q.pop();
      ans += 1;
      t += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
