#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define Dhruvfyre ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll a, b;
    cin >> a >> b;

    if((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Dhruvfyre

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}