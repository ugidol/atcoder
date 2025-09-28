#include <bits/stdc++.h>
using namespace std;
// 自分用Point
struct Point {
  int x,y;
  Point():x(0),y(0){};
  Point(int a, int b){
    x = a;
    y = b;
  }
  Point(const Point& p){
    x = p.x;
    y = p.y;
  }
  Point& operator=(const Point& r){
    x = r.x;
    y = r.y;
    return *this;
  };
  Point& operator+=(const Point& r){
    x += r.x;
    y += r.y;
    return *this;
  };
};

std::ostream& operator<<(std::ostream& os, const Point& p){
  os << '{' << p.x << ',' << p.y << '}' ;
  return os;
}
bool operator <  (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y < r.y ) ;
	}
	else {
		return ( l.x < r.x ) ;
	}
};
bool operator >  (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y > r.y ) ;
	}
	else {
		return ( l.x > r.x ) ;
	}
} ;
bool operator <= (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y <= r.y ) ;
	}
	else {
		return ( l.x <= r.x ) ;
	}
} ;
bool operator >= (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y >= r.y );
	}
	else {
		return ( l.x >= l.y );
	}
} ;
bool operator == (const Point& l, const Point& r){ return ( l.x == r.x && l.y == r.y ) ; }
bool operator != (const Point& l, const Point& r){ return ( ! ( l == r ) ) ; }
Point operator+(const Point& l, const Point& r) { 
  Point ret(l);
  ret += r;
  return ret;
};
// 自分用Rectangle
struct Rectangle {
	Point p;
	int x,y;
	Rectangle():p(0,0),x(0),y(0){};
	Rectangle(int a, int b){
		x = a;
		y = b;
	}
	bool contains(const Point &arg){
		if ( arg.x >= p.x && arg.y >= p.y && arg.x < ( p.x + x ) && arg.y < ( p.y + y ) ) {
			return true;
		}
		return false;
	}
};




int main(void){
	int H,W;
	cin >> H >> W;
	Rectangle range(H,W);
	vector<vector<char>> grid(H,vector<char>(W));
	map<pair<int,int>,int> mp;
	map<int,pair<int,int>> mp2;
	int idx = 0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> grid[i][j];
			mp[make_pair(i,j)] = idx;
			mp2[idx] = make_pair(i,j);
			idx += 1;
		}
	}
	// 移動できるのは４方向
	vector<Point> dir = {
		{-1, 0}, // ↑
		{ 0, 1}, // →
		{ 1, 0}, // ↓
		{ 0,-1}  // ←
	};
	// 磁石が置かれているマスに隣接しているかどうか？
	function<bool(Point)> is_magnet = [&](Point p){
		bool ret = false;
		for(Point d:dir){
			Point pp = p + d;
			if ( ! range.contains(pp) ) {
				continue;
			}
			if ( grid[pp.x][pp.y] == '#' ) {
				ret = true;
				return ret;
			}
		}
		return ret;
	};
	int ans = 0;
	set<Point> visited2;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			set<Point> visited;
			Point root = {i,j};
			// DFS
			function<void(Point)> dfs = [&](Point p){
				// 訪問済みにする
				visited.insert({p.x,p.y});

				// 磁石に隣接しているマスだったら、これ以上遷移できない
				if ( is_magnet(p) ) {
					return ;
				}
				visited2.insert({p.x,p.y});

				// 移動先
				for(Point d:dir){
					Point pp = p + d;
					// 範囲外には移動できない
					if ( ! range.contains(pp) ) {
						continue;
					}
					// 訪問済みは探索しない
					if ( visited.count({pp.x,pp.y}) > 0 ) {
						continue;
					}
					dfs(pp);
				}
				return ;
			};
			//
			if ( grid[i][j] == '#' ) {
				continue;
			}
			if ( visited2.count(root) > 0 ) {
				continue;
			}
			dfs(root);
			ans = max(ans,(int)visited.size());
		}
	}
	cout << ans << endl;
  return 0;
}
