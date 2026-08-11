#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define Dhruvfyre ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    
    vector<pair<ll, int>> cust;

    for(int i = 0 ; i < n ; i++){
        int a, b;
        cin >> a >> b;
        cust.pb({a, 1});
        cust.pb({b, -1});
    }

    int maxi = 0, curr = 0;

    sort(cust.begin(), cust.end());
    for(auto [time, val] : cust){
        curr += val;
        maxi = max(maxi, curr);
    }

    cout << maxi << endl;
}

int main() {

    Dhruvfyre

    solve();
    

    return 0;
}