#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
// 文字列SとTの長さは等しい制約
int main(void){
	// 入力
	string S,T;
	cin >> S >> T;

	vector<string> ans;
	// 辞書順最小の文字列をset<string>で管理する版
	function<void(void)> solve1 = [&](){
		string s = S;
		while(s!=T){
			set<string> st;
			for(int i=0;i<(int)T.size();i++){
				if ( s[i] == T[i] ) {
					continue;
				}
				string ss(s);
				ss[i] = T[i];
				st.insert(ss);
			}

			s = *st.begin();
			ans.push_back(s);
		}
	};
	// 辞書順最小の文字列をminで比較する版
	function<void(void)> solve2 = [&](){
		// 初期値はS
		string s = S;
		// Tになるまで繰り返し
		while(s!=T){
			// sを１文字ずつ交換していって辞書順最小の文字列を探す
			string min(T.size(),'z');
			for(int i=0;i<(int)T.size();i++){
				if ( s[i] == T[i] ) {
					continue;
				}
				string ss(s);
				ss[i] = T[i];
				min = std::min(min,ss);
			}
			s = min;

			ans.push_back(s);
		}
	};

	solve2();
	
	// 出力
	cout << ans.size() << endl;
	for(auto itr:ans){
		cout << itr << endl;
	}
  return 0;
}
