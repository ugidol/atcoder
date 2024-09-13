#include <bits/stdc++.h>
using namespace std;
class UF
{
public:
	// 親かどうか(parent[p]==pなら親);
	vector<int> parent;
	// 子の個数
	vector<int> children;
	// 左端
	vector<int> left;
	// 右端
	vector<int> right;
	UF(int sz)
		: parent(sz), children(sz, 0), left(sz), right(sz)
	{
		for (int i = 0; i < sz; i++)
		{
			parent[i] = i;
			left[i] = i;
			right[i] = i;
		}
	}
	int find(int n)
	{
		// 親探しループ
		int root = n;
		while (parent[root] != root)
		{
			root = parent[root];
		}
		// 経路圧縮ループ
		int p = n;
		while (parent[p] != p)
		{
			int tmp = p;
			p = parent[p];
			parent[tmp] = root;
		}
		return root;
	}
	bool same(int v1, int v2)
	{
		return (find(v1) == find(v2));
	}
	void unite(int v1, int v2)
	{
		if (same(v1, v2))
		{
			return;
		}
		v1 = find(v1);
		v2 = find(v2);
		if (children[v1] < children[v2])
		{
			parent[v1] = v2;
			children[v2] += children[v1] + 1;
			children[v1] = 0;
			left[v2] = std::min(left[v1], left[v2]);
			right[v2] = std::max(right[v1], right[v2]);
		}
		else
		{
			parent[v2] = v1;
			children[v1] += children[v2] + 1;
			children[v2] = 0;
			left[v1] = std::min(left[v1], left[v2]);
			right[v1] = std::max(right[v1], right[v2]);
		}
	}
	int min(int v)
	{
		v = find(v);
		return left[v];
	}
	int max(int v)
	{
		v = find(v);
		return right[v];
	}
};
int main(void)
{
	// 入力
	int H,W;
	cin >> H >> W ;
	// 処理済みかどうかを行毎にDSUで管理する
	vector<UF> rows(H,UF(W));
	// 処理済みかどうかを列毎にDSUで管理する
	vector<UF> cols(W,UF(H));

	// HxWのグリッド
	// 'o' : 壁
	// 'x' : 処理済
	vector<vector<char>> g(H,vector<char>(W,'o'));

	// (h,w)のグリッドを処理済みにするための関数
	function<void(int, int)> erase = [&](int h, int w)
	{
		g[h][w] = 'x';
		// 上方向に隣接するマスが破壊済みの場合、併合する
		if (h - 1 >= 0 && g[h - 1][w] == 'x')
		{
			cols[w].unite(h, h - 1);
		}
		// 下方向に隣接するマスが破壊済みの場合、併合する
		if (h + 1 < H && g[h + 1][w] == 'x')
		{
			cols[w].unite(h, h + 1);
		}
		// 左方向に隣接するマスが破壊済みの場合、併合する
		if (w - 1 >= 0 && g[h][w - 1] == 'x')
		{
			rows[h].unite(w, w - 1);
		}
		// 右方向に隣接するマスが破壊済みの場合、併合する
		if (w + 1 < W && g[h][w + 1] == 'x')
		{
			rows[h].unite(w, w + 1);
		}
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
		{
			UF& row = rows[R];
			// rows[R]におけるCの親を探す
			int root = row.find(C);
			// 左方向の壁を破壊する
			int left = row.min(root);
			left -= 1;
			if ( left >= 0 ) {
				erase(R,left);
			}
			// 右方向の壁を破壊する
			int right = row.max(root);
			right += 1;
			if ( right < W ) {
				erase(R,right);
			}
		}
		{
			UF& col = cols[C];
			// cols[C]におけるRの親を探す
			int root = col.find(R);
			// 上方向の壁を破壊する
			int top = col.min(root);
			top -= 1;
			if ( top >= 0 ) {
				erase(top,C);
			}
			// 下方向の壁を破壊する
			int bottom = cols[C].max(root);
			bottom += 1;
			if ( bottom < H ) {
				erase(bottom,C);
			}
		}
	}
#ifdef DEBUG
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			fprintf(stderr,"%c",g[i][j]);
		}
		fprintf(stderr,"\n");
	}
#endif

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
