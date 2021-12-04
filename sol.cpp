#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// view the image in this repository for better understanding
	// sort the sequence in non-increasing order because the higher
	// the value of k, the lower is the position of the coordinate
	// note: if k is greater than n, then the answer does not exist
	sort(a.rbegin(), a.rend());
	if (k <= n) {
		cout << a[k - 1] << " " << a[k - 1];
	} else {
		cout << -1;
	}
	cout << '\n';
	return 0;
}
