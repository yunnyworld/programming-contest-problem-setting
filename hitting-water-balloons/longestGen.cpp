#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int ux = -1000000000;
    int uy = -1000000000;
    int sx = 1000000000;
    int sy = 1000000000;
    int a = rnd.next(0, 1000000000);
    int b = rnd.next(0, 1000000000);
    cout << ux << ' ' << uy << '\n' << sx << ' ' << sy << '\n' << a << ' ' << b << '\n';
    return 0;
}
