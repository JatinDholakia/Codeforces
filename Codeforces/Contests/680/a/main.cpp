#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n), b(n);
    for(i,0,n){
        cin>>a[i];
    }
    for(i,0,n){
        cin>>b[i];
    }
    for(i,0,n){
        if(a[i] + b[n-1-i] > x){
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes"<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}