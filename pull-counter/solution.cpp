#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, ans;
ll a[100005], b[100005];

void solve()
{
	cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        ll x, y; char c; cin>>x>>c>>y;
        if(x >= 1) ans += a[i]*x + a[i]*y/(ll)10 - b[i];
        else ans += a[i] - b[i]*x - b[i]*y/(ll)10;
    }
    cout<<ans;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	int tc = 1; //cin >> tc;
	while (tc--) solve();
	return 0;
}