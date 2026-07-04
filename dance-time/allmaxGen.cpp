#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=100000;
    int m=100;
    cout<<n<<' '<<m<<'\n';
    for(int i=0;i<n;i++)
    {
        int a=rnd.next(1, m);
        int b=1;
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}