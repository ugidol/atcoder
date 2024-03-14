#include <bits/stdc++.h>
using namespace std;
unsigned long N;
int A[20][20];
int ans ;
void func(vector<pair<int,int>> &stk, vector<int> &vec){
  if ( stk.size() == N ) {
#ifdef DEBUG
    for(unsigned long i=0;i<stk.size();i++){
      pair<int,int> &p = stk[i];
      fprintf(stderr,"(%d,%d)=[%d],",p.first,p.second,A[p.first][p.second]);
    }
#endif
    int v1 = 0 ;
    for(unsigned long i=0;i<stk.size();i++){
      pair<int,int> &p = stk[i];
      int v2 = A[p.first][p.second];
      v1 ^= v2 ;
    }
#ifdef DEBUG
    fprintf(stderr,"v=[%d]\n",v1);
#endif
    ans = max(ans,v1);
    return ;
  }
  for(unsigned long i=0;i<1;i++){
    for(unsigned long j=i+1;j<vec.size();j++){
      int a = vec[i];
      int b = vec[j];
      pair<int,int> p = make_pair(a,b);
      //
      vector<int> vec2;
      for(unsigned long k=0;k<vec.size();k++){
        if ( k == i || k == j ) {
        }
        else {
          vec2.push_back(vec[k]);
        }
      }
      //
      stk.push_back(p);
      func(stk, vec2);
      stk.erase(stk.end()-1);
    }
  }
}
int main(void){
  cin >> N ;
  for(unsigned long i=1;i<=2*N;i++){
    for(unsigned long j=i+1;j<=(2*N);j++){
      int v;
      cin >> v;
      A[i][j] = v;
    }
  }
  //
  vector<int> vec(2*N);
  for(unsigned long i=0;i<(2*N);i++){
    vec[i] = i+1;
  }
  vector<pair<int,int>> stk;
  func(stk,vec);
  cout << ans << endl;
}
