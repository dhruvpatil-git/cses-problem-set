#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll  i = 0 ; i< n ; i ++) cin >> a[i];

    ll maxi = a[0];
    ll ans = 0;
    for(ll i = 1 ; i < n ; i++){
        if(a[i] < maxi){
            ans += maxi - a[i];
        }
        else maxi = max(maxi, a[i]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}