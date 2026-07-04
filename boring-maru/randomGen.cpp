#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=rnd.next(1, 1000000);
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
    {
        int a=rnd.next(0, 359);
        int b=rnd.next(1, 180);
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}