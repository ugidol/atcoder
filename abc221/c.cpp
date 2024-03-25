#include <bits/stdc++.h>
using namespace std;
int main(void){
  string N;
  cin >> N;
  sort(N.begin(), N.end());
  long ans = 0;
  do {
    size_t sz = N.size();
    for(int i=0;i<(int)sz-1;i++){
      string left = N.substr(0,i+1);
      string right = N.substr(i+1,sz);
      long l = stol(left);
      long r = stol(right);
      long v = l * r;
      ans = max(ans,v);
    }
    ;
  }while(next_permutation(N.begin(),N.end()));
  cout << ans << endl;

  return 0;
}
