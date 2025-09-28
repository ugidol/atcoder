#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,Q;
	cin >> N >> Q;
	vector<int> P(N);
	for(int i=0;i<N;i++){
		P[i] = i;
	}
	int num = 0;
	vector<int> ans;
	vector<int> H(N,1);
	for(int i=0;i<Q;i++){
		int q;
		cin >> q;
		if ( q == 1 ) {
			int p,h;
			cin >> p >> h;
			p--;
			h--;
			// 鳩Pの現在いる巣の鳩の個数を-1する
			H[ P[p] ] -= 1;
			// -1した結果1になったら複数鳩のいない巣
			if ( H[ P[p] ] == 1 ) {
				num -= 1;
			}
			// 鳩Pの巣の番号をhに更新する
			P[p] = h;
			// 鳩Pの移動先の巣の鳩の個数を+1する
			H[ P[p] ] += 1;
			// +1した結果2になったら複数鳩のいる巣
			if ( H[ P[p] ] == 2 ) {
				num += 1;
			}
		}
		else {
			ans.push_back(num);
		}
	}
	for(auto itr:ans){
		cout << itr << endl;
	}
	return 0;
}
