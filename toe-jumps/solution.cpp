#include <bits/stdc++.h>
using namespace std;

char D;
int idx;
string a[2];
string T="O.P.", F=".I.P", Lz=".O.P";

void toidx()
{
	if(D == 'S') idx=0;
	if(D == 'W') idx=1;
	if(D == 'N') idx=2;
	if(D == 'E') idx=3;
}

void solve()
{
	cin>>D;
	assert(D=='E' || D=='W' || D=='S' || D=='N');

	cin>>a[0]>>a[1];
	for(int i=0;i<2;i++) for(int j=0;j<2;j++) 
		assert(a[i][j]=='.' || a[i][j]=='I' || a[i][j]=='O' || a[i][j]=='P');

	swap(a[0][0], a[0][1]);
	string now = a[0] + a[1];

	toidx();
	bool isT=1, isF=1, isLz=1;
	for(int i=idx;i<idx+4;i++)
	{
		if(now[i-idx] != T[i%4]) isT=0;
		if(now[i-idx] != F[i%4]) isF=0;
		if(now[i-idx] != Lz[i%4]) isLz=0;
	}

	if(isT) cout<<"T";
	else if(isF) cout<<"F";
	else if(isLz) cout<<"Lz";
	else cout<<"?";
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