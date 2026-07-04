#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define X first
#define Y second
#define EPS 1e-9
using namespace std;

ll n;
pll a[100005];

void solve()
{
	cin>>n;
    for(int i=0;i<n;i++) cin>>a[i].X;
    for(int i=0;i<n;i++) cin>>a[i].Y;
    sort(a, a+n);
    ld lo=a[0].X, hi=a[1].X, ans = -1;
    ld mndiff=1e9;
    while(lo<=hi)
    {
        ld mid = (lo+hi)/2;
        ld rr=(mid-a[0].X)*(mid-a[0].X);
        ld R=a[0].Y/rr;
        ld L=0;
        for(int i=1;i<n;i++)
        {
            rr=(mid-a[i].X)*(mid-a[i].X);
            L+=(ld)a[i].Y/rr;
        }
        if(abs(R-L)<=mndiff)
        {
            ans=mid;
            mndiff=abs(R-L);
        }
        if(L<=R) lo=mid+EPS;
        else hi=mid-EPS;
    }
    assert(ans!=-1);
    cout.precision(15);
    cout<<fixed;
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