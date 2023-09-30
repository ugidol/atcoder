#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<char>> p, vector<vector<char>> &g){
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      g[i][j] = p[4-1-j][i];
    }
  }
  return ;
}
void dump(vector<vector<char>> g,pair<int,int> pos){
#ifdef DEBUG
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      fprintf(stderr,"%c",g[pos.first+i][pos.second+j]);
    }
    fprintf(stderr,"\n");
  }
#endif
  return ;
}
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
  vector<vector<vector<char>>> P(3,vector<vector<char>>(4,vector<char>(4,'.')));
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      for(int k=0;k<4;k++){
        char c;
        cin >> c;
        P[i][j][k] = c;
      }
    }
  }
  vector<vector<char>> p1 = P[0];
  vector<vector<char>> p2 = P[1];
  vector<vector<char>> p3 = P[2];
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
              for(int r1=0;r1<4;r1++){
                vector<vector<char>> g1 = p1;
                rotate(p1,g1);
                for(int r2=0;r2<4;r2++){
                  vector<vector<char>> g2 = p2;
                  rotate(p2,g2);
                  for(int r3=0;r3<4;r3++){
                    vector<vector<char>> g3 = p3;
                    rotate(p3,g3);
                    paste(p1,pos1,p2,pos2,p3,pos3);
                    p3 = g3;
                  }
                  p2 = g2;
                }
                p1 = g1;
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
