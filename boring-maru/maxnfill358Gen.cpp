#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=1000000;
    cout<<n<<'\n';
    int notfill=rnd.next(0, 359);
    for(int i=0;i<n;i++)
    {
        int a=notfill;
        int b=179;
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}