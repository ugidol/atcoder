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
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  cout << vec.size() << endl;
}
