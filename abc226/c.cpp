#include <bits/stdc++.h>
using namespace std ;

typedef struct _mydata {
  int t ;
  vector<int> *vec ;
} mydata ;

long func(vector<mydata> &vec, int n){
  long ret = 0 ;
  mydata dt = vec[n];
  if ( dt.t == 0 ) {
    return ret ;
  }
  ret += dt.t;
  dt.t = 0;
  vec[n] = dt ;
  for(size_t i=1;i<(*dt.vec).size();i++){
    ret += func(vec, (*dt.vec)[i]);
  }
  return ret ;
}

int main(void){
  int n;
  cin >> n ;
  vector<mydata> vec(n+1);
  for(int i=1;i<=n;i++){
    int t ;
    cin >> t ;
    mydata dt ;
    dt.t = t;
    int k;
    cin >> k ;
    dt.vec = new vector<int>(k+1);
    for(int j=1;j<=k;j++){
      int a ;
      cin >> a ;
      (*dt.vec)[j] = a ;
    }
    vec[i] = dt ;
  }
  // ----------------------------
  long ans = func(vec,n);
  cout << ans << endl ;
  return 0;
}
