#include <iostream>
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
void debug(vector<int> &vec){
	std::stringstream ss;
	for(int i=0;i<(int)vec.size();i++){
		ss << format("%d,",vec[i]);
	}
	cerr << ss.str() << endl;
}
#endif
