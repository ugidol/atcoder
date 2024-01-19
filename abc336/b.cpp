#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  list<char> l;
  while(N>0){
    int r = N % 2;
    char c = '0' + r;
    l.push_front(c);
    N /= 2;
  }
  int ans = 0;
  string s(l.begin(), l.end());
  for(int i=0;i<(int)s.size();i++){
    char c = s[s.size()-1-i];
    if ( c == '0' ) {
      ans += 1;
    }
    else{
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
