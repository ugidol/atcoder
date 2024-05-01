#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<char>> &vec){
	int H = (int)vec.size();
	int W = (int)vec[0].size();
  vector<vector<char>> src = vec;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
			
			// 二次元配列を右に90度回転させる
      //vec[i][j] = src[H-1-j][i];
			
			// 二次元配列を180度回転させる
			//vec[i][j] = src[H-1-i][W-1-j];
			
			// 二次元配列を左に90度回転させる
			//vec[i][j] = src[j][H-1-i];
			
    }
  }
  return ;
}
