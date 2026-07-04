#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

set<int> st;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    int n = inf.readInt(2, 100'000, "n");
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        int x = inf.readInt(0, 100'000'000, "x_i");
        if(i<n-1) inf.readSpace();
        ensure(st.find(x)==st.end());
        st.insert(x);
    }
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        inf.readInt(1, 100'000'000, "q_i");
        if(i<n-1) inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}