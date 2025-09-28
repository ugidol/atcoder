#include <bits/stdc++.h>
using namespace std;
struct Card {
  int i,a,c;
};


int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	vector<Card> C(N);
	vector<Card> vec(N);
	for(int i=0;i<N;i++){
		int a,c;
		cin >> a >> c;
		Card card = {i,a,c};
		vec[i] = card;
		A[i] = a;
		C[i] = card;
	}
	// 強さの昇順でソート
	sort(A.begin(), A.end());
	// コストの昇順でソート
	sort(C.begin(), C.end(),[](Card &a, Card &b){
			return a.c < b.c;
			});
	vector<int> ans;
	int mx = 0;
	for(auto card:C){
		if ( card.a < mx ) {
			continue;
		}
		mx = max(mx, card.a);
		ans.push_back(card.i + 1);
	}
	//
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(auto itr:ans){
		cout << itr << ' ' ;
	}
	cout << endl;
  return 0;
}
