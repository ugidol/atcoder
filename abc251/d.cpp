#include <bits/stdc++.h>
using namespace std;
long f(long v, int exp){
  for(int i=0;i<exp;i++){
    v *= 1e2;
  }
  return v;
}
int main(void){
  long W;
  cin >> W;
  /*
   * 1e6-1までは、a*1e4 + b*1e2 + c で表現できるので、最大3.
   * 1e6 は、 1e4 + 99*1e4 で表現できる
   */
  int x = 0;
  while(W>0){
    W /= 100 ;
    x += 1;
  }
  x = min(3,x);
  int num = 99 * x ;
  cout << num << endl;
  /*
   * c:     1 -     99
   * b:   100 -   9900
   * a: 10000 - 990000
   */
  for(int i=0;i<x;i++){
    for(int j=1;j<100;j++){
      long v = f(j,i);
      cout << v << ' ';
    }
  }
  cout << endl;
  return 0;
}
