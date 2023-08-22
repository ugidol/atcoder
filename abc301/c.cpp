#include <bits/stdc++.h>
using namespace std;
const string atcoder = "atcoder";
int main(void){
  string S;
  cin >> S;
  string T;
  cin >> T;
  map<char,int> mpS;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    mpS[c] += 1;
  }
  map<char,int> mpT;
  for(int i=0;i<(int)T.size();i++){
    char c = T[i];
    mpT[c] += 1;
  }
  vector<char> vec;
  for(char c='a';c<='z';c++){
    vec.push_back(c);
  }
  vec.push_back('@');
  for(auto c : vec){
    if ( mpS[c] == mpT[c] ) {
      continue;
    }
    if ( atcoder.find(c) != string::npos ) {
      if ( mpS[c] < mpT[c] ) {
        mpS['@'] -= (mpT[c]-mpS[c]);
        mpS[c] += (mpT[c]-mpS[c]);
      }
      else {
        mpT['@'] -= (mpS[c]-mpT[c]);
        mpT[c] += (mpS[c]-mpT[c]);
      }
    }
  }
  string ans = "Yes";
  for(auto c : vec){
    if ( mpS[c] == mpT[c] ) {
      continue;
    }
    else {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}

