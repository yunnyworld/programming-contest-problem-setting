#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll p[361], ans, n, a, b;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b==180) 
        {
            p[0]++;
            p[360]--;
        }
        else
        {
            ll s=(a+180-b)%360, e=(s+2*b)%360;
            if(s<=e)
            {
                p[s]++; p[e+1]--;
            }
            else
            {
                p[0]++; p[e+1]--;
                p[s]++; p[360]--;
            }
        }
    }
    for(int i=0;i<360;i++)
    {
        if(i-1>=0) p[i]+=p[i-1];
        if(p[i]) ans++;
    }
    cout<<ans;
	return 0;
}