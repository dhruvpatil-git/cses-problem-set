#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define Dhruvfyre ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    int n, m;
    cin >> n >> m;
    
    multiset<int> s;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int i = 0 ; i < m; i++){
        int a;
        cin >> a;

        auto it = s.upper_bound(a);

        if(it == s.begin()){
            cout << -1 << endl;
        }
        else{
            --it;
            cout << *it << endl;
            s.erase(it);
        }
    }
}

int main() {

    Dhruvfyre

    solve();
    

    return 0;
}