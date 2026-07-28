#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll maxi = 1;
    ll cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i - 1]){
            cnt++;
        }
        else cnt = 1;

        maxi = max(maxi, cnt);
    }
    cout << maxi << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}