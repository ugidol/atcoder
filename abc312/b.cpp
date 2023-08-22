#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<string> vec(N);
  for(int i=0;i<N;i++){
    cin >> vec[i];
  }
  for(int i=0;i<N-8;i++){
    for(int j=0;j<M-8;j++){
      //
      bool a = true;
      for(int h=0;h<3;h++){
        for(int w=0;w<3;w++){
          if ( vec[i+h][j+w] != '#' ) {
            a = false;
          }
        }
      }
      //
      bool b = true;
      for(int h=6;h<9;h++){
        for(int w=6;w<9;w++){
          if ( vec[i+h][j+w] != '#' ) {
            b = false;
          }
        }
      }
      //
      bool c = true;
      for(int h=0;h<4;h++){
        if ( vec[i+h][j+3] != '.' ) {
          c = false;
        }
        if ( vec[i+h+5][j+5] != '.' ) {
          c = false;
        }
      }
      //
      bool d = true;
      for(int w=0;w<4;w++){
        if ( vec[i+3][j+w] != '.' ) {
          d = false;
        }
        if ( vec[i+5][j+w+5] != '.' ) {
          d = false;
        }
      }
      //
      if ( a && b && c && d ) {
        cout << (i+1) << ' ' << (j+1) << endl;
      }
    }
  }
  return 0;
}
