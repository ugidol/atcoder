#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<char>> &vec){
	int H = (int)vec.size();
	int W = (int)vec[0].size();
  vector<vector<char>> src = vec;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
			
			// 二次元配列を右に90度回転させる
      // 転送先主体
      //vec[i][j]  = src[H-1-j][i];
      // 転送元主体
      //vec[j][H-1-i] = src[i][j];
			
			// 二次元配列を180度回転させる
      // 転送先主体
			//vec[i][j] = src[H-1-i][W-1-j];
      // 転送元主体
      //vec[H-1-i][W-1-j] src A[i][j];
			
			// 二次元配列を270度回転させる
      // 転送先主体
			//vec[i][j] = src[j][H-1-i];
      // 転送元主体
      //vec[H-1-j][i] = src[i][j];
			
    }
  }
  return ;
}
