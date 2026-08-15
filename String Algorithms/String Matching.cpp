#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define Dhruvfyre ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    string s, t;
    cin >> s >> t;

    string p = t + "#" + s;
    int n = p.size();

    vector<int> pi(n);

    for(int i = 1; i < n; i++) {
        int j = pi[i - 1];

        while(j > 0 && p[i] != p[j])
            j = pi[j - 1];

        if(p[i] == p[j])
            j++;

        pi[i] = j;
    }

    int cnt = 0;
    int m = t.size();

    for(int i = m + 1; i < n; i++) {
        if(pi[i] == m)
            cnt++;
    }

    cout << cnt << endl;
}

int main() {
    
    Dhruvfyre

    solve();
    
    return 0;
}