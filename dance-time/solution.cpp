#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll MOD = 1e9+7;
ll n, m, a, b, cnt[2], res=1ll, pres, ans;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) 
    {
        cin>>a>>b;
        cnt[b]++;
        if(b)
        {
            pres=res;
            res=res*(m-1)%MOD;
        }
    }
    ans=res%MOD;
    ans=(ans+cnt[0]*(res*(m-1)%MOD))%MOD;
    ans=(ans+cnt[1]*pres%MOD)%MOD;
    cout<<ans;
	return 0;
}