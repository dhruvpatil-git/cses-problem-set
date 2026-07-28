#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    if(n == 1) cout << 1 << endl;
    else if(n == 2 || n == 3) cout << "NO SOLUTION" << endl;
    else{
        for(int i = 2 ; i <= n; i += 2){
            cout << i << " ";
        }
        for(int i = 1 ;i <= n; i += 2 ){
            cout << i << " ";
        }
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