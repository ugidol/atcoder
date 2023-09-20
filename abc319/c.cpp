#include <bits/stdc++.h>
using namespace std;
const vector<pair<int,int>> trg1 = {
  {0,0},
  {1,1},
  {2,2},
};
const vector<pair<int,int>> trg2 = {
  {0,2},
  {1,1},
  {2,0},
};
bool bingo(vector<vector<char>> &c, vector<vector<char>> &w, pair<int,int> &p){
  int i = p.first;
  int j = p.second;
  w[i][j] = '*';
  if ( w[(i+0)%3][(j+0)%3] == '*' && w[(i+0)%3][(j+1)%3] == '*' && w[(i+0)%3][(j+2)%3] == '*' ) {
    if ( c[(i+0)%3][(j+0)%3] != c[(i+0)%3][(j+1)%3] && c[(i+0)%3][(j+1)%3] == c[(i+0)%3][(j+2)%3] ) {
#ifdef DEBUG
      fprintf(stderr,"{%d,%d}",i,j);
      fprintf(stderr,"{%d,%d}",(i+0)%3,(j+1)%3);
      fprintf(stderr,"{%d,%d}",(i+0)%3,(j+2)%3);
      fprintf(stderr,"%c%c%c\n",c[(i+0)%3][(j+0)%3],c[(i+0)%3][(j+1)%3],c[(i+0)%3][(j+2)%3] );
#endif
      return true;
    }
  }
  if ( w[(i+0)%3][(j+0)%3] == '*' && w[(i+1)%3][(j+0)%3] == '*' && w[(i+2)%3][(j+0)%3] == '*' ) {
    if ( c[(i+0)%3][(j+0)%3] != c[(i+1)%3][(j+0)%3] && c[(i+1)%3][(j+0)%3] == c[(i+2)%3][(j+0)%3] ) {
#ifdef DEBUG
      fprintf(stderr,"{%d,%d}",i,j);
      fprintf(stderr,"{%d,%d}",(i+1)%3,(j+0)%3);
      fprintf(stderr,"{%d,%d}",(i+2)%3,(j+0)%3);
      fprintf(stderr,"%c%c%c\n",c[(i+0)%3][(j+0)%3],c[(i+1)%3][(j+0)%3],c[(i+2)%3][(j+0)%3] );
#endif
      return true;
    }
  }
  if ( find(trg1.begin(), trg1.end(), p) != trg1.end() ) {
    if ( w[(i+0)%3][(j+0)%3] == '*' && w[(i+1)%3][(j+1)%3] == '*' && w[(i+2)%3][(j+2)%3] == '*' ) {
      if ( c[(i+0)%3][(j+0)%3] != c[(i+1)%3][(j+1)%3] && c[(i+1)%3][(j+1)%3] == c[(i+2)%3][(j+2)%3] ) {
#ifdef DEBUG
        fprintf(stderr,"{%d,%d}",i,j);
        fprintf(stderr,"{%d,%d}",(i+1)%3,(j+1)%3);
        fprintf(stderr,"{%d,%d}",(i+2)%3,(j+2)%3);
        fprintf(stderr,"%c%c%c\n",c[(i+0)%3][(j+0)%3],c[(i+1)%3][(j+1)%3],c[(i+2)%3][(j+2)%3] );
#endif
        return true;
      }
    }
  }
  if ( find(trg2.begin(), trg2.end(), p) != trg2.end() ) {
    if ( w[(i+0)%3][(j+0)%3] == '*' && w[(i+2)%3][(j+1)%3] == '*' && w[(i+1)%3][(j+2)%3] == '*' ) {
      if ( c[(i+0)%3][(j+0)%3] != c[(i+2)%3][(j+1)%3] && c[(i+2)%3][(j+1)%3] == c[(i+1)%3][(j+2)%3] ) {
#ifdef DEBUG
        fprintf(stderr,"{%d,%d}",i,j);
        fprintf(stderr,"{%d,%d}",(i+2)%3,(j+1)%3);
        fprintf(stderr,"{%d,%d}",(i+1)%3,(j+2)%3);
        fprintf(stderr,"%c%c%c\n",c[(i+0)%3][(j+0)%3],c[(i+2)%3][(j+1)%3],c[(i+1)%3][(j+2)%3] );
#endif
        return true;
      }
    }
  }
  return false;
}
bool func(vector<vector<char>> c, vector<vector<char>> &w, vector<pair<int,int>> &v){
  for(auto itr : v){
    if ( bingo(c, w,itr) ) {
      return false;
    }
  }
  return true;
}
int main(void){
  vector<vector<char>> c(3,vector<char>(3,' '));
  for(auto &i:c){
    for(auto &j:i){
      cin >> j;
    }
  }
  vector<pair<int,int>> vec = {
    {0,0},{0,1},{0,2},
    {1,0},{1,1},{1,2},
    {2,0},{2,1},{2,2},
  };
  double total = 0;
  double ok = 0;
  sort(vec.begin(), vec.end());
  do {
    total += 1;
    vector<vector<char>> w = c;
    if ( func(c,w,vec) ) {
      ok += 1;
    }
  }
  while(next_permutation(vec.begin(), vec.end()));
  double ans = ok / total ;
  cout << fixed << setprecision(18);
  cout << ans << endl;
  return 0;
}
