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

int main(void){
  int Q;
  cin >> Q;
  priority_queue<ball,vector<ball>,greater<ball>> pq;
  long sm = 0;
  vector<long> ans;
  for(int i=0;i<Q;i++){
    int p;
    cin >> p;
    if ( p == 1 ) {
      int x;
      cin >> x;
      ball b = {x - sm,i};
      pq.push(b);
    }
    else if ( p == 2 ) {
      int x;
      cin >> x;
      sm += x;
    }
    else {
      ball b = pq.top();pq.pop();
      long v = b.x;
      ans.push_back(v + sm );
    }
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
