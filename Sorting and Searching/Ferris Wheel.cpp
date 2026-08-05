#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);

    for(ll  i = 0 ; i < n ;i ++) cin >> a[i];

    sort(a.begin(), a.end());

    ll i = 0, j = n - 1;
    ll cnt = 0;
    while(i <= j){
        if(a[i] + a[j] <= x) {
            cnt++;
            i++;j--;
        }
        else {
            cnt++;
            j--;
        }
    }

    cout << cnt << endl;
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