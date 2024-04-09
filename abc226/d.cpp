#include <bits/stdc++.h>
using namespace std;

set<pair<int,int>> st;

void func(const pair<int,int> &a, const pair<int,int> &b){
  /*
  printf("(%d,%d)->(%d,%d)=",a.first, a.second, b.first, b.second);
  printf("(%d,%d)",a.first - b.first, a.second - b.second ) ;
  */
  int gs = gcd(a.first - b.first, a.second - b.second );
  /*
  printf("%d:",a1);
  printf("(%d,%d)\n",(a.first - b.first)/a1, (a.second - b.second)/a1 ) ;
  */
  pair<int,int> p = make_pair((a.first - b.first)/gs, (a.second - b.second)/gs ) ;
  st.insert(p);
  pair<int,int> p1 = make_pair((b.first - a.first)/gs, (b.second - a.second)/gs ) ;
  st.insert(p1);
  return ;
}

int main(void){
  int n ;
  cin >> n ;
  vector<pair<int,int>> vec(n);
  for(int i=0;i<n;i++){
    int x , y;
    cin >> x >> y ;
    pair<int,int> p = make_pair(x,y);
    vec[i] = p;
  }
  for(int i=0;i<n-1;i++){
    pair<int,int> a = vec[i];
    for(int j=i+1;j<n;j++){
      pair<int,int> b = vec[j];
      func(a,b);
    }
  }
  cout << st.size()  << endl;
  return 0;
}
