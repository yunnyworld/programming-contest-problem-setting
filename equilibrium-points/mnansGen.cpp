#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

set<int> st;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = 100000;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<i;
        if(i<n-1) cout<<' ';
    }
    cout<<'\n';
    cout<<1<<' ';
    for(int i=0;i<n-1;i++)
    {
        cout<<100000000;
        if(i<n-2) cout<<' ';
    }
    cout<<'\n';
    return 0;
}