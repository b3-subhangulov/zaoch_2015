#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX_N = 10001;

ll m, n;
ll p, ans;

set <ll> hooz;
vector < vector < ll > > data;

int main() {

    ans = 0;

    ios::sync_with_stdio(false);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> m;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    if (n == 2) {

        for (int i = 0; i < m; ++i) {
            cin >> p;
            hooz.insert(p);
        }

        for (int i = 0; i < m; ++i) {
            cin >> p;

            if (hooz.find(p) != hooz.end()) {
                ans++;
            }
        }

        cout << ans + 1;
    }
    else {

        data.resize(n);

        for (int i = 0; i < n; ++i) {
            data[i].resize(m);
            for (int j = 0; j < m; ++j) {
                cin >> data[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            hooz.clear();

            for (int j = 0; j < m; ++j) {
                hooz.insert(data[i][j]);
            }

            for (int j = i + 1; j < n; ++j) {
                p = 0;

                for (int k = 0; k < m; ++k) {
                    if (hooz.find(data[j][k]) != hooz.end()) {
                        p++;
                    }
                }

                ans = max(ans, p);
            }
        }

        cout << ans + 1;
    }

    return 0;
}
