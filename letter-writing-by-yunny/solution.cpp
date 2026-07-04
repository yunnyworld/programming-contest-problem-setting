#include <bits/stdc++.h>
#define ll long long int
#define pll pair<ll, ll>
using namespace std;
const ll MONTH_HI=9999*12+12;
const ll MONTH_LO=2000*12+1;

ll N;
ll p[120005];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>N;
    assert(1<=N && N<=100000);
    for(int i=0;i<N;i++)
    {
        string s, e; cin>>s>>e;
        ll vs=stoll(s.substr(0, 4))*12+stoll(s.substr(5, 2));
        ll ve=stoll(e.substr(0, 4))*12+stoll(e.substr(5, 2));
        assert(MONTH_LO<=vs && vs<=MONTH_HI);
        assert(MONTH_LO<=ve && ve<=MONTH_HI);
        p[vs]++;
        p[ve+1]--;
    }
    ll mxi, mx=0;
    for(int i=MONTH_LO;i<=MONTH_HI;i++)
    {
        p[i]+=p[i-1];
        if(p[i]>mx)
        {
            mx=p[i];
            mxi=i;
        }
    } 
    ll y=mxi/12, m=mxi%12;
    if(m==0)
    {
        y--;
        m=12;
    }
    string sy=to_string(y);
    string sm=to_string(m);
    if(m<10) sm='0'+sm;
    string ans=sy+'-'+sm;
    cout<<ans<<'\n';
	return 0;
}
