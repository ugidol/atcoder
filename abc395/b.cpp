#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<vector<char>> vec(N, vector<char>(N));
	function<void(int,int,char)> f = [&](int a, int b,char c){
		for(int i=a;i<=b;i++){
			for(int j=a;j<=b;j++){
				vec[i][j] = c;
			}
		}
	};
	vector<char> C = {'#','.' };
	for(int i=0;i<N;i++){
		int j = N - 1 - i;
		f(i,j, C[ i % 2 ]);
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << vec[i][j] ;
		}
		cout << endl;
	}
	return 0;
}
