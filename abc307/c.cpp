#include <bits/stdc++.h>
using namespace std;
typedef struct _size {
  int H;
  int W;
  set<pair<int,int>> st;
} SIZE;
SIZE A;
SIZE B;
SIZE X;
void read(SIZE& sz){
  for(int y=0;y<sz.H;y++){
    string s;
    cin >> s;
    for(int x=0;x<sz.W;x++){
      char c = s[x];
      if ( c == '#' ) {
        sz.st.insert(make_pair(x,y));
      }
    }
  }
}
bool func(int x1, int y1, int x2, int y2){
  // Xの領域内のマスを調べるループ
  for(int x=0; x<X.W; x++){
    for(int y=0; y<X.H; y++){
      // 黒マスの場合
      if ( X.st.find(make_pair(x,y)) != X.st.end() ) {
        // Aの領域、Bの領域、両方とも透明ならＮＧ
        bool bA = A.st.find(make_pair(x-x1,y-y1)) != A.st.end() ;
        bool bB = B.st.find(make_pair(x-x2,y-y2)) != B.st.end() ;
        if ( ! bA && ! bB ) {
          return false;
        }
      }
      // 透明マスの場合
      else {
        // Aの領域、Bの領域、どちらか片方でも黒マスならＮＧ
        bool bA = A.st.find(make_pair(x-x1,y-y1)) != A.st.end() ;
        bool bB = B.st.find(make_pair(x-x2,y-y2)) != B.st.end() ;
        if ( bA || bB ) {
          return false;
        }
      }
    }
  }
  // Xの領域外の、Aの領域の黒マスを探すループ
  for(auto itr : A.st ) {
    int x = itr.first + x1 ;
    if ( x < 0 || x >= X.W ) {
      return false;
    }
    int y = itr.second + y1 ;
    if ( y < 0 || y >= X.H ) {
      return false;
    }
  }
  // Xの領域外の、Bの領域の黒マスを探すループ
  for(auto itr : B.st ) {
    int x = itr.first + x2 ;
    if ( x < 0 || x >= X.W ) {
      return false;
    }
    int y = itr.second + y2 ;
    if ( y < 0 || y >= X.H ) {
      return false;
    }
  }
  return true;
}
int main(void){
  cin >> A.H >> A.W;
  read(A);
  cin >> B.H >> B.W;
  read(B);
  cin >> X.H >> X.W;
  read(X);
  //
  string ans = "No";
  // Aの領域をすこしずつ動かすループ
  for(int y1 = -1 * ( A.H - 1 ) ; y1 <= ( X.H - 1 ) ; y1++ ) {
    for(int x1 = -1 * ( A.W - 1 ) ; x1 <= ( X.W - 1 ) ; x1++ ) {
      // Bの領域をすこしずつ動かすループ
      for(int y2 = -1 * ( B.H - 1 ) ; y2 <= ( X.H - 1 ) ; y2++ ) {
        for(int x2 = -1 * ( B.W - 1 ) ; x2 <= ( X.W - 1 ) ; x2++ ) {
#ifdef DEBUG
//          fprintf(stderr,"(%d,%d),(%d,%d)\n",x1,y1,x2,y2);
#endif
          // Xの領域の黒マスと比較するループ
          bool b = func(x1,y1,x2,y2);
          if ( b == true ) {
            ans = "Yes";
            goto eol;
          }
        }
      }
    }
  }
eol:
  cout << ans << endl;
  return 0;
}
