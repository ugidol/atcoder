#include <bits/stdc++.h>
using namespace std;
// 集合stの中から、
// "v 以上の最小の値" と "v より小さい最大の値"
// をpairで返す
pair<int,int> find(set<int> &st, int v){
	pair<int,int> ret;
	// "v 以上の最小の値"は、lower_bound()で求められる.
	auto itr = st.lower_bound(v);
	ret.second = *itr;
	// "v より小さい最大の値"は、イテレータを１つ戻す
	itr--;
	ret.first = *itr;
	return ret;
};
int main(void){
	// 入力
	int H,W;
	cin >> H >> W ;
	// 処理済みかどうかを行毎にsetで管理する
	vector<set<int>> rows(H);
	// 処理済みかどうかを列毎にsetで管理する
	vector<set<int>> cols(W);

	// 各setに番兵を入れる
	for(int i=0;i<H;i++){
		rows[i].insert(-1);
		rows[i].insert(W);
	}
	for(int i=0;i<W;i++){
		cols[i].insert(-1);
		cols[i].insert(H);
	}

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			rows[i].insert(j);
			cols[j].insert(i);
		}
	}

	// HxWのグリッド
	// 'o' : 壁
	// 'x' : 処理済
	vector<vector<char>> g(H,vector<char>(W,'o'));

	// (h,w)のグリッドを処理済みにするための関数
	function<void(int,int)> erase = [&](int h,int w){
		rows[h].erase(w);
		cols[w].erase(h);
		g[h][w] = 'x';
	};

	int Q;
	cin >> Q;
	// クエリの数ぶんループ
	for(int i=0;i<Q;i++){
		int R,C;
		cin >> R >> C ;
		R -= 1;
		C -= 1;

		// (R,C)に壁が存在する場合、(R,C)の壁を破壊する
		if ( g[R][C] == 'o' ) {
			erase(R,C);
			continue;
		}

		// 壁が存在しない場合
		// R行を左右に見て最初に現れる壁を探す
		pair<int,int> pr = find(rows[R],C);
		// C列を上下に見て最初に現れる壁を探す
		pair<int,int> pc = find(cols[C],R);

		// 左方向の壁を破壊する
		if ( pr.first > -1 ) {
			erase(R,pr.first);
		}
		// 右方向の壁を破壊する
		if ( pr.second < W ) {
			erase(R,pr.second);
		}
		// 上方向の壁を破壊する
		if ( pc.first > -1 ) {
			erase(pc.first,C);
		}
		// 下方向の壁を破壊する
		if ( pc.second < H ) {
			erase(pc.second,C);
		}
	}

	// グリッドに残った壁の数を数える
	int ans = 0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			if ( g[i][j] == 'o' ) {
				ans += 1;
			}
		}
	}
	cout << ans << endl;
  return 0;
}
