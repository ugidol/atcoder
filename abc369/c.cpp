#include <bits/stdc++.h>
using namespace std;
long f(long a, long b)
{
	long n = (b - a);
	long v = ((n + 1) * (n)) / 2;
	return v;
}
int main(void)
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	long ans = N;
	int left = 0;
	while (left < N - 1)
	{
		int right = left + 1;
		int d = A[right] - A[left];
		while (right < N)
		{
			if (A[right + 1] - A[right] != d)
			{
				break;
			}
			right += 1;
		}
		ans += f(left, right);
		left = right;
	}
	cout << ans << endl;
	return 0;
}
