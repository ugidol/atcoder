#include <bits/stdc++.h>
using namespace std;
typedef struct _DATA {
	string s;
	_DATA* parent;
	vector<_DATA*> next;
} DATA;
int main(void){
	int N,Q;
	cin >> N >> Q;
	DATA root ;
	root.s = "";
	root.parent = &root;
	DATA* sv = &root;
	vector<DATA*> pc(N,&root);
	//
	for(int i=0;i<Q;i++){
		int q;
		cin >> q;
		/* 1 : PC <= SV */
		if ( q == 1 ) {
			int p;
			cin >> p;
			p -= 1;
			//
			pc[p] = sv;
		}
		else if ( q == 2 ) {
			int p;
			cin >> p;
			p -= 1;
			string s;
			cin >> s;
			/* */
			DATA* data = pc[p];
			DATA* nxt = new DATA();
			nxt->s = s;
			nxt->parent = data;
			data->next.push_back(nxt);
			pc[p] = nxt;
		}
		/* 3 : PC -> SV */
		else if ( q == 3 ) {
			int p;
			cin >> p;
			p -= 1;
			/* */
			sv = pc[p];
		}
	}
	list<string> ans;
	DATA* tmp = sv;
	while(tmp!=&root){
		ans.push_front(tmp->s);
		tmp = tmp->parent;
	}
	for(auto itr:ans){
		cout << itr;
	}
	cout << endl;
	return 0;
}
