#include <bits/stdc++.h>
using namespace std;
typedef struct {
  long l;
  long r;
} S;
long f(long v){
  if ( v == 0 ) {
    return 60;
  }
  long n = 0;
  while(v%2==0&&v>1){
    v /= 2;
    n += 1;
  }
  return n;
}
long pow(long v){
  long x = 1;
  for(long i=0;i<v;i++){
    x *= 2;
  }
  return x;
}
int main(void){
  long L,R;
  cin >> L >> R;
  vector<S> vec;
  while(L<R){
    long n = f(L);
    while((R-L)<pow(n)){
      n -= 1;
    }
    long len = pow(n);
    vec.push_back({L,L+len});
    L += len;
  }
  cout << vec.size() << endl;
  for(auto itr:vec){
    cout << itr.l << ' ' << itr.r << endl;
  }
  return 0;
}
