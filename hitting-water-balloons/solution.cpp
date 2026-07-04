#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll ux, uy, sx, sy, a, b, ans = 4e18;
    cin >> ux >> uy >> sx >> sy >> a >> b;

    ans = min(ans, a * abs(ux - sx) + min(a, b) * abs(uy - sy));
    ans = min(ans, a * abs(uy - sy) + min(a, b) * abs(ux - sx));

    cout << ans << '\n';

    return 0;
}
