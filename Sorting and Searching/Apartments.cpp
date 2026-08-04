#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n, m , k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    for(int i = 0 ; i < n ;i ++) cin >> a[i];
    for(int i = 0 ; i < m ;i ++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i] > b[j]) j++;
        else i++;
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