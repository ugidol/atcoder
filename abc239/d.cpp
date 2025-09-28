#include <bits/stdc++.h>
using namespace std;
static int a[10000+1];
set<int> init(){
  set<int> prime_numbers;
  int i;
  for(a[1]=0,i=2;i<=10000;i++){
    a[i] = 1;
  }
  for(i=2;i<=10000/2;i++){
    int j;
    for(j=2;j<=10000/i;j++){
      a[i*j] = 0;
    }
  }
  for(i=1;i<=10000;i++){
    if ( a[i] == 1 ) {
      prime_numbers.insert(i);
    }
  }
  return prime_numbers;
}
int main(void){
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  //
  set<int> prime_numbers = init();
  vector<bool> vec;
  for(int i=A;i<=B;i++){
    bool b = false;
    for(int j=C;j<=D;j++){
      int v = i + j ;
      // 素数になる
      if ( prime_numbers.find(v) != prime_numbers.end() ) {
        b = true ;
        break;
      }
    }
    vec.push_back(b);
  }
  string ans = "Aoki";
  for(size_t i=0;i<vec.size();i++){
    if ( vec[i] == false ) {
      ans = "Takahashi";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
