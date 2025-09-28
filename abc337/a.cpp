#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int X,Y;
  X = 0;
  Y = 0;
  for(int i=0;i<N;i++){
    int x,y;
    cin >> x >> y;
    X += x;
    Y += y;
  }
  string ans = "Draw";
  if ( X > Y ) {
    ans = "Takahashi";
  }
  else if ( X < Y ) {
    ans = "Aoki";
  }
  cout << ans << endl;
  return 0;
}
