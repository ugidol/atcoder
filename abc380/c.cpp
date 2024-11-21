#include <bits/stdc++.h>
using namespace std;
struct pos {
	int left;
	int right;
};

#ifdef DEBUG
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args){
	size_t len = std::snprintf(nullptr,0,fmt.c_str(), args ... );
	std::vector<char> buff(len+1);
	std::snprintf(&buff[0], len+1, fmt.c_str(), args ... );
	return std::string(&buff[0], &buff[0]+len);
}
void debug(vector<pos> &vec){
	std::stringstream ss;
	for(auto &v:vec){
		ss << format("{%2d,%2d}",v.left, v.right);
	}
	cerr << ss.str() << endl;
}
#endif
int main(void){
	int N,K;
	cin >> N >> K;
	K -= 1;
	string S(N+1,'0');
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	vector<pos> vec(1);
	char prev='0';
	for(int i=0;i<N+1;i++){
		char c = S[i];
		if ( prev=='0' && c=='1'){
			pos &p = *vec.rbegin();
			p.left = i;
		}
		else if ( prev == '1' && c == '0' ) {
			pos &p = *vec.rbegin();
			p.right = i;
			vec.push_back({0,0});
		}
		prev = c;
	}
#ifdef DEBUG
	debug(vec);
#endif
	string ans(N,'0');
	for(int i=0;i<N;i++){
		if ( vec[K-1].right <= i && i < vec[K].right ) {
			for(int j=vec[K].left;j<vec[K].right;j++,i++){
				ans[i] = S[j];
			}
			for(int j=vec[K-1].right;j<vec[K].left;j++,i++){
				ans[i] = S[j];
			}
			continue;
		}
		ans[i] = S[i];
	}
	cout << ans << endl;
	return 0;
}
