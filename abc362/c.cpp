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
void debug(string name, vector<long> &vec){
	std::stringstream ss;
	ss << name << ':' ;
	for(int i=0;i<(int)vec.size();i++){
		ss << format("%4d,",vec[i]);
	}
	cerr << ss.str() << endl;
}
#endif
int main(void){
	int N;
	cin >> N;
	vector<long> L(N);
	vector<long> R(N);
	vector<long> X(N);
	for(int i=0;i<N;i++){
		cin >> L[i] >> R[i];
		X[i] = L[i];
	}
	long suml = std::accumulate(L.begin(), L.end(), 0L);
	long sumr = std::accumulate(R.begin(), R.end(), 0L);
#ifdef DEBUG
	fprintf(stderr,"suml=%ld,sumr=%ld\n",suml,sumr);
#endif
	if ( suml > 0 || sumr < 0 ) {
		cout << "No" << endl;
		return 0;
	}
#ifdef DEBUG
	vector<long> XX(N);
#endif
	for(int i=0;i<N;i++){
		long d = std::min( R[i]-L[i], 0-suml );
		suml += d;
		X[i] += d;
#ifdef DEBUG
		XX[i] = suml;
#endif
		if ( suml == 0 ) {
			break;
		}
	}
#ifdef DEBUG
	debug(" X",X);
	debug("XX",XX);
#endif
	cout << "Yes" << endl;
	for(int i=0;i<N;i++){
		cout << X[i] << ' ';
	}
	cout << endl;
	return 0;
}

