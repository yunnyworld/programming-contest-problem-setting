#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    // make all a, b case
    vector<pair<int, int>> allab;
    for(int a=0;a<360;a++)
        for(int b=1;b<=180;b++)
            allab.push_back({a, b});
    int sz=allab.size();

    registerGen(argc, argv, 1);
    int n=1000000;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
    {
        int a=allab[i%sz].first;
        int b=allab[i%sz].second;
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}