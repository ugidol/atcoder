#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args){
	size_t len = std::snprintf(nullptr,0,fmt.c_str(), args ... );
	std::vector<char> buff(len+1);
	std::snprintf(&buff[0], len+1, fmt.c_str(), args ... );
	return std::string(&buff[0], &buff[0]+len);
}
void debug(stack<int> stk){
	std::stringstream ss;
	while(!stk.empty()){
		ss << format("%d,",stk.top());
		stk.pop();
	}
	cerr << ss.str() << endl;
}
#endif

int main(void){
	int N;
	cin >> N;
	vector<int> H(N);
	for(int i=0;i<N;++i){
		cin >> H[i];
	}
	vector<int> ans(N);
	stack<int> stk;
	for(int idx=N-2;idx>=0;--idx){
		while( ! stk.empty() && stk.top() < H[idx+1] ) {
			stk.pop();
		}
		stk.push(H[idx+1]);
#ifdef DEBUG
		debug(stk);
#endif
		ans[idx] = stk.size();
	}
	for(int i=0;i<N;i++){
		cout << ans[i] << endl;
	}
	return 0;
}
