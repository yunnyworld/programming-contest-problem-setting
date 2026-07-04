#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=rnd.next(1, 100000);
    int m=rnd.next(1, 100);
    cout<<n<<' '<<m<<'\n';
    for(int i=0;i<n;i++)
    {
        int a=rnd.next(1, m);
        int b=rnd.next(0, 1);
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}