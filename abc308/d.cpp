#include <bits/stdc++.h>
using namespace std;
int H,W;
vector<string> vec;
string snuke = "snuke";
set<pair<int,int>> visited;
bool dfs(int h, int w){
  char c = vec[h][w];
  visited.insert(make_pair(h,w));
  if ( snuke.find(c) == string::npos ) {
    return false;
  }
  if ( h == H-1 && w == W-1 ) {
    return true;
  }
  bool b1 = false;
  bool b2 = false;
  bool b3 = false;
  bool b4 = false;
  char next = snuke[ ( snuke.find(c) + 1 ) % snuke.size() ] ;
  if ( w > 0 ) {
    char left = vec[h][w-1];
    if ( left == next && visited.find(make_pair(h,w-1)) == visited.end() ) {
      b1 = dfs(h,w-1);
    }
  }
  if ( w < W-1 ) {
    char right = vec[h][w+1];
    if ( right == next && visited.find(make_pair(h,w+1)) == visited.end() ) {
      b2 = dfs(h,w+1);
    }
  }
  if ( h > 0 ) {
    char top = vec[h-1][w];
    if ( top == next && visited.find(make_pair(h-1,w)) == visited.end() ) {
      b3 = dfs(h-1,w);
    }
  }
  if ( h < H-1 ) {
    char bottom = vec[h+1][w] ;
    if ( bottom == next && visited.find(make_pair(h+1,w)) == visited.end() ) {
      b4 = dfs(h+1,w);
    }
  }
  return ( b1 || b2 || b3 || b4 ) ;
}
int main(void){
  cin >> H >> W ;
  vec.resize(H);
  for(int i=0;i<H;i++){
    string s;
    cin >> s;
    vec[i] = s;
  }
  string ans = "No";
  if ( dfs(0,0) ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
