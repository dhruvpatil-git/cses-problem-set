#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    ll y, x;
    cin >> y >> x;
    ll a , ans;
    if(x > y){
        if(x % 2 == 0){
            a = (x - 1) * (x - 1) + 1;
            ans = a + y - 1;
        }
        else{
            a = x * x;
            ans = a - y + 1;
        }
    }
    else{
        if(y % 2 == 0){
            a = y * y;
            ans = a - x + 1;
        }
        else{
            a = (y - 1) * (y - 1) + 1;
            ans = a + x - 1;
        }
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

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}