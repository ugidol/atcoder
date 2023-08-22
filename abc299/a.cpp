#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S ;
  cin >> S;
  int left = -1;
  int right = -1;
  int mid = -1;
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( c == '|' ) {
      if ( left == -1 ) {
        left = i;
      }
      else {
        right = i;
      }
    }
    else if ( c == '*' ) {
      mid = i;
    }
  }
  string ans = "out";
  if ( left < mid && mid < right ) {
    ans = "in";
  }
  cout << ans << endl;
  return 0;
}
