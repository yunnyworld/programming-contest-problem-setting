#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 100'000, "n");
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        inf.readInt(10, 1000, "A_i");
        if(i<n-1) inf.readSpace();
    }
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        inf.readInt(10, 1000, "B_i");
        if(i<n-1) inf.readSpace();
    }
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        double k = inf.readDouble(0, 1000, "K_i");
        ensure(0<k && k<=1000);
        if(i<n-1) inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}