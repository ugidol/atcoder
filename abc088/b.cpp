#include <bits/stdc++.h>
using namespace std;

int main(void){
  long n;
  cin >> n ;
  vector<long> vec(n);
  for(int i=0;i<n;i++){
    long v ;
    cin >> v ;
    vec[i] = v;
  }
  sort(vec.begin(), vec.end(), greater<int>{});

  long a = 0; 
  long b = 0;
  for(int i=0;i<n;i++){
    if ( i % 2 == 0 ) {
      a += vec[i];
    }
    else {
      b += vec[i];
    }
  }
  cout << ( a - b ) << endl;
}
