#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define Dhruvfyre ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll x;
    cin >> x;

    ll ans = 0;
    while(x){
        x /= 5;
        ans += x;
    }

    cout << ans << endl;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Dhruvfyre

    solve();
    
    return 0;
}