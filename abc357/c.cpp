#include <bits/stdc++.h>
using namespace std;
int pow(int n){
	int v = 1;
	for(int i=0;i<n;i++){
		v *= 3;
	}
	return v;
}
int main(void){
	int N;
	cin >> N;
	vector<vector<char>> grid( pow(N), vector<char>(pow(N),' '));
	function<void(int,int,int)> f2 = [&](int x, int y, int n){
		for(int i=x;i<(x+pow(n));i++){
			for(int j=y;j<(y+pow(n));j++){
				grid[i][j] = '.';
			}
		}
		return ;
	};
	function<void(int,int,int)> f = [&](int x, int y, int n){
		if ( n == 0 ) {
			grid[x][y] = '#';
			return ;
		}
		int base = pow(n-1);
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if ( i == 1 && j == 1 ) {
					f2(x+(i*base),y+(j*base),n-1);
				}
				else {
					f(x+(i*base),y+(j*base),n-1);
				}
			}
		}
		return ;
	};
	f(0,0,N);
	for(int i=0;i<pow(N);i++){
		for(int j=0;j<pow(N);j++){
			cout << grid[i][j] ;
		}
		cout << endl;
	}
  return 0;
}
