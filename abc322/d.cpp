#include <bits/stdc++.h>
using namespace std;
void copy(vector<vector<char>> &src, vector<vector<char>> &dest){
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      dest[i][j] = src[i][j];
    }
  }
  return ;
}
void rotate(vector<vector<char>> &g){
  vector<vector<char>> p = g;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      g[i][j] = p[4-1-j][i];
    }
  }
  return ;
}
#ifdef DEBUG
void dump(vector<vector<char>> g,pair<int,int> pos){
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      fprintf(stderr,"%c",g[pos.first+i][pos.second+j]);
    }
    fprintf(stderr,"\n");
  }
  fprintf(stderr,"----\n");
  return ;
}
#endif
string ans = "No";
void paste(vector<vector<char>> &p1, pair<int,int> pos1,vector<vector<char>> &p2, pair<int,int> pos2,vector<vector<char>> &p3, pair<int,int> pos3){
  vector<vector<char>> grid(10,vector<char>(10,'.'));
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if ( p1[i][j] == '#' ) {
        grid[i+pos1.first][j+pos1.second] = p1[i][j];
      }
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if ( p2[i][j] == '#' ) {
        grid[i+pos2.first][j+pos2.second] = p2[i][j];
      }
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if ( p3[i][j] == '#' ) {
        grid[i+pos3.first][j+pos3.second] = p3[i][j];
      }
    }
  }
#ifdef DEBUG
  //dump(grid,{3,3});
#endif
  bool b = true;
  for(int i=3;i<7;i++){
    for(int j=3;j<7;j++){
      if ( grid[i][j] != '#' ) {
        b = false;
        goto eol;
      }
    }
  }
eol:
  if ( b ) {
    ans = "Yes";
  }
}
int main(void){
  int num = 0;
  vector<vector<vector<char>>> P(3,vector<vector<char>>(4,vector<char>(4,'.')));
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      for(int k=0;k<4;k++){
        char c;
        cin >> c;
        P[i][j][k] = c;
        if ( c == '#' ) {
          num += 1;
        }
      }
    }
  }
  if ( num != 16 ) {
    cout << "No" << endl;
    return 0;
  }
  vector<vector<vector<char>>> P1(4,vector<vector<char>>(4,vector<char>(4,'.')));
  for(int i=0;i<4;i++){
    copy(P[0], P1[i]);
    for(int j=0;j<i;j++){
      rotate(P1[i]);
    }
#ifdef DEBUG
    //dump(P1[i],{0,0});
#endif 
  }
  vector<vector<vector<char>>> P2(4,vector<vector<char>>(4,vector<char>(4,'.')));
  for(int i=0;i<4;i++){
    copy(P[1], P2[i]);
    for(int j=0;j<i;j++){
      rotate(P2[i]);
    }
#ifdef DEBUG
    //dump(P2[i],{0,0});
#endif 
  }
  vector<vector<vector<char>>> P3(4,vector<vector<char>>(4,vector<char>(4,'.')));
  for(int i=0;i<4;i++){
    copy(P[2], P3[i]);
    for(int j=0;j<i;j++){
      rotate(P3[i]);
    }
#ifdef DEBUG
    //dump(P3[i],{0,0});
#endif 
  }
  /*
  vector<vector<char>> &p1 = P1[0];
  vector<vector<char>> &p2 = P2[3];
  vector<vector<char>> &p3 = P3[0];
  paste(p1,{2,3},p2,{4,2},p3,{3,4});
  */

  for(int i1=0;i1<7;i1++){
    for(int j1=0;j1<7;j1++){
      for(int i2=0;i2<7;i2++){
        for(int j2=0;j2<7;j2++){
          for(int i3=0;i3<7;i3++){
            for(int j3=0;j3<7;j3++){
              pair<int,int> pos1 = {i1,j1};
              pair<int,int> pos2 = {i2,j2};
              pair<int,int> pos3 = {i3,j3};
              //
              vector<vector<char>> &p1 = P1[0];
              for(int r2=0;r2<4;r2++){
                for(int r3=0;r3<4;r3++){
                  vector<vector<char>> &p2 = P2[r2];
                  vector<vector<char>> &p3 = P3[r3];
                  paste(p1,pos1,p2,pos2,p3,pos3);
                }
              }
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
