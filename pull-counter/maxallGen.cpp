#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = 100000;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<1000;
        if(i<n-1) cout<<' ';        
    }
    cout<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<1000;
        if(i<n-1) cout<<' ';   
    }
    cout<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<999<<'.'<<9;
        if(i<n-1) cout<<' ';
    }
    cout<<'\n';
    return 0;
}