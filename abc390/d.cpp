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
void debug(vector<char> &vec){
	std::stringstream ss;
	for(auto &v:vec){
		ss << format("%c,",v);
	}
	cerr << ss.str() << endl;
}
#endif

vector<char> f(long v){
	vector<char> ret(64,'0');
	if ( v == 0 ) {
		return ret;
	}
	vector<int> vec;
	while(v>0){
		long r = v % 2;
		vec.push_back(r);
		v /= 2;
	}
	for(int i=0;i<vec.size();i++){
		ret[ 64-1-i ] += vec[i] ;
	}
	return ret;
}
int main(void){
	int N;
	cin >> N;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	vector<vector<char>> vec;
	for(int i=0;i<N;i++){
		vector<char> v = f(A[i]);
		vec.push_back(v);
	}
	{
		long sum = std::accumulate(A.begin(), A.end(),0);
		vector<char> v = f(sum);
		vec.push_back(v);
	}
#ifdef DEBUG
	for(int i=0;i<vec.size();i++){
		debug( vec[i] );
	}
#endif
	return 0;
}
