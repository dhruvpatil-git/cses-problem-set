#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    for(ll i = 1; i <= n ; i++){
        ll tot = ((i * i) * (i * i - 1)) / 2;
        ll atk = 4 * (i - 1) * (i - 2);

        cout << tot - atk << endl;
    }
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