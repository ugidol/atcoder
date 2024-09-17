#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	long t = 0;
	for (int i = 0; i < N; i++) {
		long H;
		cin >> H;
		long x = H / 5;
		t += (x * 3);
		H -= (x * 5);
		while (H > 0) {
			t += 1;
			if (t % 3 == 0) {
				H -= 3;
			}
			else {
				H -= 1;
			}
		}
	}
	cout << t << endl;
	return 0;
}
