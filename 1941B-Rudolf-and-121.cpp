#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 2; i++) {
		if (2 * a[i] > a[i+1] || a[i+2] < a[i]) {
			cout << "NO\n";
			return;
		}
		a[i+2] -= a[i];
		a[i+1] -= 2 * a[i];
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}