#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  //
  unsigned long cnt1 = 0;
  unsigned long idx1 = 0;
  for(;idx1<S.size();idx1++){
    if ( S[idx1] != 'a' ) {
      break;
    }
    cnt1 += 1;
  }
  unsigned long cnt2 = 0;
  unsigned long idx2 = S.size()-1;
  for(;idx2>0;idx2--){
    if ( S[idx2] != 'a' ) {
      break;
    }
    cnt2 += 1;
  }
  //
  unsigned long pos = 0;
  unsigned long len = S.size() ;
  if ( cnt2 > cnt1 ) {
    len = S.size() - ( cnt2 - cnt1 );
  }
  string s1 = S.substr(pos,len);
#ifdef DEBUG
  fprintf(stderr,"S=[%s],pos=[%lu],len=[%lu],%s\n",S.c_str(),pos,len,s1.c_str());
#endif
  bool b1 = true;
  for(size_t i=0;i<s1.size();i++){
    if ( s1[i] != s1[s1.size()-i-1] ) {
      b1 = false;
    }
  }
  if ( b1 ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}
