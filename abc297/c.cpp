#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<string> S(H);
  for(int i=0;i<H;i++){
    string s;
    cin >> s;
    S[i] = s;
  }
  for(int i=0;i<H;i++){
    string &s = S[i];
    for(int j=0;j<(W-1);j++){
      char c = s[j];
      if ( c == 'T' ) {
        char next = s[j+1];
        if ( next == 'T' ) {
          s[j] = 'P';
          s[j+1] = 'C';
        }
      }
    }
  }
  for(int i=0;i<H;i++){
    cout << S[i]<< endl;
  }
  return 0;
}
