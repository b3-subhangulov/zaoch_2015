#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const MAX_N = 1000001;

bool data[MAX_N];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	ll n, a, b, c, from, to, p = 0;
	
	cin >> n >> a >> b >> c;
	
	for (int i = 0; i < n; ++i) {
		cin >> from >> to;
		
		for (int j = from; j <= to; ++j) {
			data[j] = 1;
		}
	}
	
	for (int i = 1; i <= b; ++i) {
		if (data[i]) {
			p++;
		}
	}
	
	if (p > c) {
		cout << "No";
		return 0;
	}
	
	for (int i = b + 1; i < MAX_N; ++i) {
		if (data[i]) {
			p++;
		}
		
		if (data[i - b]) {
			p--;
		}
		
		if (p > c) {
			cout << "No";
			return 0;
		}
	}
	
	cout << "Yes";
	
	return 0;
}
