#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    ll n;
    cin >> n;

    ll sum = (n * (n + 1)) / 2;
    
    if(sum % 2 != 0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        vector<ll> a, b;
        ll need = sum / 2;
        ll end = -1;
        for(ll i = n; i >= 0; i--){
            if(need > i){
                need -= i;
                a.pb(i);
            }
            else{
                end = i;
                a.pb(need);
                break;
            }
        }
        for(ll i = 1 ; i <= end; i++){
            if(i == need) continue;
            b.pb(i);
        }

        cout << a.size() << endl;

        for(ll i = 0 ; i < (ll)a.size() ; i ++){
            cout << a[i] << " ";
        }
        cout << endl;

        cout << b.size() << endl;

        for(ll i = 0 ; i < (ll)b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
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