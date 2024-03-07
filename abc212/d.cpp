#include <bits/stdc++.h>
using namespace std;
struct ball {
  long x;
  int  i;
};
bool operator < (const ball &left, const ball& right){
  return ( left.x < right.x );
};
bool operator > (const ball &left, const ball& right){
  return ( left.x > right.x );
};
struct num {
  int  i;
  long x;
  num(int a, long b){
    i = a;
    x = b;
  }
};
bool operator < (const num &left, const num& right){
  return ( left.i < right.i );
};

int main(void){
  int Q;
  cin >> Q;
  priority_queue<ball,vector<ball>,greater<ball>> pq;
  vector<num> vec;
  vector<long> ans;
  for(int i=0;i<Q;i++){
    int p;
    cin >> p;
    if ( p == 1 ) {
      int x;
      cin >> x;
      ball b = {x,i};
      pq.push(b);
    }
    else if ( p == 2 ) {
      int x;
      cin >> x;
      num n = {i,x};
      vec.push_back(n);
    }
    else {
      ball b = pq.top();pq.pop();
      long v = b.x;
      num n = {b.i,0};
      auto itr = upper_bound(vec.begin(), vec.end(), n);
      while(itr!=vec.end()){
        v += (*itr).x;
        itr = next(itr);
      }
      ans.push_back(v);
    }
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
