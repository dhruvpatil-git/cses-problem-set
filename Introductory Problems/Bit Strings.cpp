#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    ll n;
    cin >> n;

    ll ans = 1;
    ll mod = 1e9 + 7;

    for(int i = 1; i <= n; i++){
        ans = (ans * 2) % mod;
    }

    cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}