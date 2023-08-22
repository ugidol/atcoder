#include <bits/stdc++.h>
using namespace std;
string func(char a, char b, char c, char d, char e){
  string ret = "";
  ret += a;
  ret += b;
  ret += c;
  ret += d;
  ret += e;
  return ret;
}
int main(void){
  int H,W;
  cin >> H >> W ;
  vector<string> S(H);
  for(int i=0;i<H;i++){
    string s;
    cin >> s;
    S[i] = s;
  }
  //
  for(int i=0;i<H;i++){
    for(int j=0;j<W-4;j++){
      string s = func(S[i][j],S[i][j+1],S[i][j+2],S[i][j+3],S[i][j+4]);
      if ( s == "snuke" ) {
        cout << i+1 << ' ' << j+1   << endl;
        cout << i+1 << ' ' << j+1+1 << endl;
        cout << i+1 << ' ' << j+1+2 << endl;
        cout << i+1 << ' ' << j+1+3 << endl;
        cout << i+1 << ' ' << j+1+4 << endl;
        goto EOL;
      }
      else if ( s == "ekuns" ) {
        cout << i+1 << ' ' << j+1+4 << endl;
        cout << i+1 << ' ' << j+1+3 << endl;
        cout << i+1 << ' ' << j+1+2 << endl;
        cout << i+1 << ' ' << j+1+1 << endl;
        cout << i+1 << ' ' << j+1   << endl;
        goto EOL;
      }
    }
  }
  //
  for(int i=0;i<H-4;i++){
    for(int j=0;j<W;j++){
      string s = func(S[i][j],S[i+1][j],S[i+2][j],S[i+3][j],S[i+4][j]);
      if ( s == "snuke" ) {
        cout << i+1   << ' ' << j+1 << endl;
        cout << i+1+1 << ' ' << j+1 << endl;
        cout << i+1+2 << ' ' << j+1 << endl;
        cout << i+1+3 << ' ' << j+1 << endl;
        cout << i+1+4 << ' ' << j+1 << endl;
        goto EOL;
      }
      else if ( s == "ekuns" ) {
        cout << i+1+4 << ' ' << j+1 << endl;
        cout << i+1+3 << ' ' << j+1 << endl;
        cout << i+1+2 << ' ' << j+1 << endl;
        cout << i+1+1 << ' ' << j+1 << endl;
        cout << i+1   << ' ' << j+1 << endl;
        goto EOL;
      }
    }
  }
  //
  for(int i=0;i<H-4;i++){
    for(int j=0;j<W-4;j++){
      string s = func(S[i][j],S[i+1][j+1],S[i+2][j+2],S[i+3][j+3],S[i+4][j+4]);
      if ( s == "snuke" ) {
        cout << i+1   << ' ' << j+1   << endl;
        cout << i+1+1 << ' ' << j+1+1 << endl;
        cout << i+1+2 << ' ' << j+1+2 << endl;
        cout << i+1+3 << ' ' << j+1+3 << endl;
        cout << i+1+4 << ' ' << j+1+4 << endl;
        goto EOL;
      }
      else if ( s == "ekuns" ) {
        cout << i+1+4 << ' ' << j+1+4 << endl;
        cout << i+1+3 << ' ' << j+1+3 << endl;
        cout << i+1+2 << ' ' << j+1+2 << endl;
        cout << i+1+1 << ' ' << j+1+1 << endl;
        cout << i+1   << ' ' << j+1   << endl;
        goto EOL;
      }
    }
  }
EOL:
  return 0;
}
