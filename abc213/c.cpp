#include <bits/stdc++.h>
using namespace std;

// 入力データ用構造体
typedef struct _data {
  int i;
  int a;
  int b;
} mydata ;

// a でソート
bool func1( const mydata &left, const mydata &right){
  return left.a < right.a  ;
}
// b でソート
bool func2( const mydata &left, const mydata &right){
  return left.b < right.b  ;
}
// i でソート
bool func3( const mydata &left, const mydata &right){
  return left.i < right.i  ;
}

int main(){
  int h , w , n ;
  cin >> h >> w >> n ;
  vector<mydata> vec(n);
  for(int i=0;i<n;i++){
    int a, b;
    cin >> a >> b ;
    vec[i] = {i + 1 , a, b };
  }
  // a でソート
  sort(vec.begin(), vec.end(), func1 );
  int cnt = 0 ;
  int prev = -1 ;
  // a の再採番
  for(size_t i=0;i<vec.size();i++){
    if ( prev == vec[i].a ) {
      prev = vec[i].a ;
      vec[i].a = cnt;
    }
    else {
      prev = vec[i].a ;
      vec[i].a = ++cnt;
    }
  }
  // b でソート
  sort(vec.begin(), vec.end(), func2 );
  cnt = 0;
  prev = -1 ;
  // b の再採番
  for(size_t i=0;i<vec.size();i++){
    if ( prev == vec[i].b ) {
      prev = vec[i].b;
      vec[i].b = cnt;
    }
    else {
      prev = vec[i].b;
      vec[i].b = ++cnt;
    }
  }
  // i でソート
  sort(vec.begin(), vec.end(), func3 );
  for(auto obj : vec){
    cout << obj.a << ' ' << obj.b << endl;
  }
  return 0;
}
