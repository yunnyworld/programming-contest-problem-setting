#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=1000000;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
    {
        int m=rnd.next(2, 180);
        int m2=rnd.next(1, m-1);
        int l=rnd.next(0+m, 360-m);
        int r=rnd.next(0+m, 360-m);
        if(r<l) swap(l, r);
        int a=rnd.next(l, r);
        int b=rnd.next(1, m2);
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}