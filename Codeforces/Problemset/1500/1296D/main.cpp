#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

void solve() {
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    vector<int> h(n);
    For(i, 0, n){
        cin >> h[i];
        h[i] %= a + b;
        if(h[i] == 0)
            h[i] += a + b;
        h[i] = ((h[i] + a - 1) / a) - 1;
    }
    sort(h.begin(), h.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(k - h[i] < 0)
            break;
        ans++;
        k -= h[i];
    }
    cout << ans << '\n';
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}