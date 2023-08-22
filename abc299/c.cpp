#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int left = 0;
  int right = 0;
  int ans = -1;
  for(left=0;left<N&&right<N;left+=1,right+=1){
    if ( S[left] == '-' ) {
      continue;
    }
    right = left ;
    while(S[right]=='o'){
      right+=1;
    }
    if ( right >= N ) {
      break;
    }
    ans = max(ans,right-left);
    left = right ;
  }
  reverse(S.begin(),S.end());
  left = 0;
  right = 0;
  for(left=0;left<N&&right<N;left+=1,right+=1){
    if ( S[left] == '-' ) {
      continue;
    }
    right = left ;
    while(S[right]=='o'){
      right+=1;
    }
    if ( right >= N ) {
      break;
    }
    ans = max(ans,right-left);
    left = right ;
  }
  if ( ans == 0 ) {
    ans = -1;
  }
  cout << ans << endl;
  return 0;
}
