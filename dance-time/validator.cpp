#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 100'000, "n");
    inf.readSpace();
    int m = inf.readInt(1, 100, "m");
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        int a = inf.readInt(1, m, "a");
        inf.readSpace();
        int b = inf.readInt(0, 1, "b");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}