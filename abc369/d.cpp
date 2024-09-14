#include <iostream>
#include <array>
#include <vector>
#include <sstream>
#ifdef DEBUG
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args){
	size_t len = std::snprintf(nullptr,0,fmt.c_str(), args ... );
	std::vector<char> buff(len+1);
	std::snprintf(&buff[0], len+1, fmt.c_str(), args ... );
	return std::string(&buff[0], &buff[0]+len);
}
template <size_t SIZE>
void debug(std::vector<std::array<long,SIZE>>& dp){
	std::stringstream ss;
	for(int i=0;i<(int)dp.size();i++){
		ss << format("%ld,",dp[i][0]);
	}
	std::cerr << ss.str() << std::endl;
	ss.str("");
	for(int i=0;i<(int)dp.size();i++){
		ss << format("%d,",dp[i][1]);
	}
	std::cerr << ss.str() << std::endl;
}
#endif

using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> vec(N);
	for(int i=0;i<N;i++){
		cin >> vec[i];
	}
	vector<array<long,2>> dp(N,{0,0});
	dp[0][0] = vec[0];
	dp[0][1] = 0;
	for(int i=1;i<N;i++){
		dp[i][0] = max(dp[i-1][0],dp[i-1][1]+vec[i]);
		dp[i][1] = max(dp[i-1][0] + vec[i] + vec[i],dp[i-1][1]);
	}
#ifdef DEBUG
	debug(dp);
#endif
	long ans = max(dp[N-1][0],dp[N-1][1]);
	cout << ans << endl;
	return 0;
}
