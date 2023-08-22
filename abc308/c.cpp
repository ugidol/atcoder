#include <bits/stdc++.h>
using namespace std;
typedef struct _data {
  int i;
  long a;
  long b;
} DATA;
int main(void){
  int N;
  cin >> N ;
  vector<DATA> vec(N);
  for(int i=0;i<N;i++){
    long a,b;
    cin >> a >> b ;
    DATA d;
    d.i = i + 1;
    d.a = a;
    d.b = b;
    vec[i] = d;
  }
  sort(vec.begin(), vec.end(), [](DATA &left, DATA &right){
      long l = ( left.a * right.a + left.a * right.b );
      long r = ( right.a * left.a + right.a * left.b );
      if ( l == r ) {
        return left.i < right.i ;
      }
      else {
        return l > r ;
      }
      });
  for(auto itr : vec){
    cout << itr.i << ' ';
  }
  cout << endl;
  return 0;
}
