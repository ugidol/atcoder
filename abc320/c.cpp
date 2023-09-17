#include <bits/stdc++.h>
using namespace std;
unsigned int spin(vector<string> &reels, char c){
  vector<string>::iterator itr = reels.begin();
  unsigned int sz = itr->size();
  unsigned int t=0;
  string &ptr = *itr;
  for(; t<sz*3 ; t++){
    char x = ptr[t%sz];
    if ( x == c ) {
      ++itr;
      if ( distance(reels.begin(), itr) == 3 ) {
        break;
      }
      ptr = *itr;
      continue;
    }
  }
  if ( distance(reels.begin(),itr) == 3 ) {
    return t;
  }
  return ~0;
}
int main(void){
  int M;
  cin >> M;
  string S1,S2,S3;
  cin >> S1 >> S2 >> S3;
  vector<vector<string>> ptns = {
    {S1,S2,S3},
    {S1,S3,S2},
    {S2,S1,S3},
    {S2,S3,S1},
    {S3,S2,S1},
    {S3,S1,S2},
  };
  //
  unsigned int ans = ~0;
  vector<char> cs = {'0','1','2','3','4','5','6','7','8','9'};
  for(auto c : cs){
    for(auto ptn:ptns){
      unsigned int t = spin(ptn,c);
      ans = min(ans,t);
    }
  }
  cout << (int)ans << endl;
  return 0;
}
