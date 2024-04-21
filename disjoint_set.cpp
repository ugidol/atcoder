#include <bits/stdc++.h>
using namespace std;
/* 自分用union-find */
class UF{
public:
  int _sz;
	// 要素を配列で管理する.
	vector<int> parent;
	explicit UF(int sz) : _sz(sz), parent(sz, -1) {
    ;
	}
	// unionは予約語なのでuniteにする.
	void unite(int v1, int v2){
		int p1 = find(v1);
		int p2 = find(v2);
		// 既に同値類だったら何もしない.
		if (p1 == p2){
				return;
		}
		// 重さ均衡(weight balancing)
    if ( -parent[p1] < -parent[p2] ) {
      swap(p1,p2);
    }
    parent[p1] += parent[p2] ;
    parent[p2] = p1;
    return;
	}
  
	// 同値類かどうか
	bool same(int v1, int v2){
		return (find(v1) == find(v2));
	}

	// 親を探す.
	int find(int v){
		// parent[root] < 0 になるまでループ.
		int root = v;
		while (parent[root] >= 0) {
			root = parent[root];
		}
		// 経路短縮(path compression)
		int c = v;
		while (parent[c] >= 0) {
			int tmp = c;
			c = parent[c];
			parent[tmp] = root;
		}
		return root;
	}
  // mp[root] : {nodes,...};
  map<int,vector<int>> groups(){
    map<int,vector<int>> mp;
    for(int i=0;i<_sz;i++){
      int p = find(i);
      mp[p].push_back(i);
    }
    /*
    for(int i=0;i<(int)parent.size();i++){
      if ( parent[i] < 0 ) {
        mp[i].push_back(i);
      }
      else {
        mp[ parent[i] ].push_back(i);
      }
    }
    */
    return mp;
  }
  void dump(){
    for(int i=0;i<(int)parent.size();i++){
      fprintf(stderr,"%4d|",i);
    }
    fprintf(stderr,"\n");
    for(int i=0;i<(int)parent.size();i++){
      fprintf(stderr,"%4d,",parent[i]);
    }
    fprintf(stderr,"\n");
  }
};
