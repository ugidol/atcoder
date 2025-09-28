#include <bits/stdc++.h>
using namespace std;

typedef struct _point {
  long t;
  long x;
  long y;
} point;

point ary[4] = { {0,  1,  0}, // X座標+1
                 {0,  0,  1}, // Y座標+1
                 {0, -1,  0}, // X座標-1
                 {0,  0, -1}  // Y座標-1
               };

bool func(long t, point &from, point &dest){
  /*
   * 座標が負の値には移動できない.
   */
  if ( from.x < 0 || from.y < 0 ) {
    return false;
  }
  if ( t == 0 ) {
    /*
    * 時刻が０になった時点で目的の座標に移動していたら、OK
    */
    if ( from.x == dest.x && from.y == dest.y ) {
      return true;
    }
    else {
      return false;
    }
  }
  else {
    /*
     * 移動先座標との距離を算出.
     */
    long distance = abs(from.x - dest.x) + abs(from.y - dest.y) ;
    /*
     * 残り時間よりも距離が大きい場合、
     * 絶対に辿り着けないので、NG
     */
    if ( distance > t ) {
      return false;
    }
    /*
     * 時間が余る場合、残り時間が奇数の場合には、
     * 絶対に辿り着けないので、NG
     */
    if ( ( t - distance ) % 2 == 1 ) {
      return false;
    }
  }
  /*
   * １座標ずつ移動して判定
   */
  for(int i=0;i<4;i++){
    point newfrom = {0, from.x + ary[i].x, from.y + ary[i].y };
    bool ret = func(t - 1, newfrom, dest);
    if ( ret ) {
      return ret;
    }
  }
  return false;
}

int main(void){
  /*
   * 入力Ｎ（要素数）
   */
  long n;
  cin >> n ;
  vector<point> vec(n);
  /*
   * 入力ｔ，ｘ，ｙ
   * （ｔ：時刻、ｘ、ｙ：座標）
   */
  for(int i=0;i<n;i++){
    long t=0, x=0, y=0;
    cin >> t >> x >> y ;
    point p = {t, x, y};
    vec[i] = p;
  }
  point current = {0, 0, 0};
  bool ret = false;
  for(int i=0;i<n;i++){
    /*
     * 座標（ｘ、ｙ）に移動できるかな？
     */
    ret = func(vec[i].t - current.t, current,vec[i]);
    if ( ret != true ) {
      break;
    }
    current.t = vec[i].t;
    current.x = vec[i].x;
    current.y = vec[i].y;
  }
  /*
   * 判定結果の出力
   */
  if ( ret ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
