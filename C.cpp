#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    ll n, d, answer = 0;

    cin >> n >> d;

    vector <ll> data(n);

    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    sort(data.begin(), data.end());

    for (int i = 0; i < n - 1; ++i) {
        if (data[i + 1] - data[i] <= d) {
            answer++;
            ++i;
        }
    }

    cout << answer;

	return 0;
}
