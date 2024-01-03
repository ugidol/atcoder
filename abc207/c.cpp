#include <bits/stdc++.h>
using namespace std;

typedef struct _mydata {
  int i;
  int t;
  double l;
  double r;
} mydata ;

int main(void){
  int n;
  cin >> n;
  vector<mydata> vec(n);
  for(int i=0;i<n;i++){
    mydata obj;
    obj.i = i;
    cin >> obj.t >> obj.l >> obj.r ;
    switch(obj.t){
      case 1:
      break;
      case 2:
      obj.r -= 0.5;
      break;
      case 3:
      obj.l += 0.5;
      break;
      case 4:
      obj.l += 0.5;
      obj.r -= 0.5;
      break;
      default:
      break;
    }
    vec[i] = obj;
  }
  //
  int ans = 0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if ( max(vec[i].l,vec[j].l) <= min(vec[i].r,vec[j].r) ){
        ans += 1;
      }
    }
  }
  cout << ans << endl; 
  return 0;
}
