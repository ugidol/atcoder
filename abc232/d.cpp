#include <bits/stdc++.h>
using namespace std;
static char** vec2;

int func(char** vec, int h, int w, int cnt){
#ifdef DEBUG
  fprintf(stderr,"[%d][%d]\n",h,w);
#endif
  if ( h > 100 || w > 100 ) {
    return cnt;
  }
  if ( vec[h][w] == '#' ) {
    return cnt ;
  }
  if ( vec2[h][w] != -1 ) {
    return vec2[h][w];
  }
  cnt += 1 ;
  int a = func(vec,h+1,w  ,cnt);
  int b = func(vec,h  ,w+1,cnt);
  int v = max(a,b);
  vec2[h][w] = v;
  return v;
}


int main(void){
  int h,w;
  cin >> h >> w;
  //
  char** vec = (char**)malloc(102 * sizeof(char*));
  for(int i=0;i<102;i++){
    vec[i] = (char*)malloc(102*sizeof(char));
    memset(vec[i],'#',102*sizeof(char));
  }
  vec2 = (char**)malloc(102 * sizeof(char*));
  for(int i=0;i<102;i++){
    vec2[i] = (char*)malloc(102*sizeof(char));
    memset(vec2[i],-1,102*sizeof(char));
  }
  //
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      char c;
      cin >> c;
      vec[i+1][j+1] = c ;
    }
  }
  //
#ifdef DEBUG
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      fprintf(stdout,"%c",vec[i][j]);
    }
    fprintf(stdout,"\n");
  }
#endif
  //
  int ans = func(&vec[0],1,1,0);
  cout << ans << endl; 
  return 0;
}
