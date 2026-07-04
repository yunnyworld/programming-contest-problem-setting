#include <bits/stdc++.h>
#include <random>
#define ll long long int
#define pll pair<ll, ll>
using namespace std;
const ll MONTH_HI=9999*12+12;
const ll MONTH_LO=2000*12+1;

ll p[MONTH_HI+5];
pair<string, string> in[100005];

int main()
{
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<ll> genN(1, 100000), genD(MONTH_LO, MONTH_HI);

    for(int tc=1;tc<=10;tc++)
    {
        memset(p, 0, sizeof(p));

        string in_name="ansMAX"+to_string(tc)+".in";
        ofstream writeIn(in_name);
        ll N=genN(gen);
        writeIn<<N<<'\n';
        for(int i=0;i<N;i++)
        {
            ll vs=genD(gen), ve=MONTH_HI;
            if(vs>ve) swap(vs, ve);
            ll lys=vs/12, lms=vs%12;
            if(lms==0)
            {
                lys--;
                lms=12;
            }
            ll lye=ve/12, lme=ve%12;
            if(lme==0)
            {
                lye--;
                lme=12;
            }
            string ys=to_string(lys), ms=to_string(lms);
            string ye=to_string(lye), me=to_string(lme);
            if(ms.length()==1) ms='0'+ms;
            if(me.length()==1) me='0'+me;
            string s=ys+'-'+ms, e=ye+'-'+me;
            writeIn<<s<<' '<<e<<'\n';
            in[i]={s, e};
        }
        writeIn.close();


        string out_name="ansMAX"+to_string(tc)+".out";
        ofstream writeOut(out_name);
        assert(1<=N && N<=100000);
        for(int i=0;i<N;i++)
        {
            string s, e; tie(s, e)=in[i];
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
        writeOut<<ans<<'\n';
        writeOut.close();
    }
	return 0;
}
