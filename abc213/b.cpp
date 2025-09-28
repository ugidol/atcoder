#include <bits/stdc++.h>
using namespace std ;


struct _mydata {
  int i;
  int n;
} ;

bool func(const struct _mydata &left, const struct _mydata &right){
  return right.n < left.n ;
}

int main(void){
  int n;
  cin >> n ;
  vector<struct _mydata> vec(n);
  for(int i=0;i<n;i++){
    struct _mydata obj = {-1,-1};
    obj.i = i + 1;
    cin >> obj.n ;
    vec[i] = obj;
  }
  //
  sort(vec.begin(), vec.end(), func);
  cout << vec[1].i << endl;
  return 0;
}
