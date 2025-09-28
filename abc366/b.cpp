#include <bits/stdc++.h>
using namespace std;
/* 二次元配列を右に90度回転させる */
vector<vector<char>> rotate(vector<vector<char>> &src, int n, int m){
  vector<vector<char>> g(m,vector<char>(n,' '));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      g[j][n-1-i] = src[i][j];
    }
  }
  return g;
}
int main(void){
	int N;
	cin >> N;
	vector<vector<char>> g(100,vector<char>(100,'*'));
	int len = 0;
	for(int i=0;i<N;i++){
		string s;
		cin >> s;
		for(int j=0;j<(int)s.size();j++){
			g[i][j] = s[j];
		}
		len = max(len, (int)s.size());
	}
	g = rotate(g,N,len);
	for(int i=0;i<len;i++){
		for(int j=0;j<N;j++){
			char c = g[i][N-j];
			if ( c >= 'a' && c <='z' ) {
				break;
			}
			g[i][N-j] = ' ';
		}
		string s(g[i].begin(), g[i].end());
		if ( s[0] == ' ' ) {
			break;
		}
		cout << s << endl;
	}
  return 0;
}
