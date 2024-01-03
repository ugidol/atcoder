#include <bits/stdc++.h>
using namespace std;
typedef struct _data {
  unsigned long a;
  unsigned long b;
} mydata;
bool func(const mydata &left, const mydata &right){
  return left.a < right.a ;
}
int main(void){
  unsigned long n,k;
  cin >> n >> k;
  vector<mydata> vec(n);
  for(unsigned long i=0;i<n;i++){
    unsigned long a,b;
    cin >> a >> b;
    mydata d;
    d.a = a;
    d.b = b;
    vec[i] = d;
  }
  sort(vec.begin(), vec.end(), func );
  for(unsigned long i=0;i<n;i++){
    if ( vec[i].a > k ) {
      break;
    }
    k += vec[i].b;
  }
  cout << k << endl;
  return 0;
}
