#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 1'000'000, "n");
    inf.readEoln();
    for(int i=0;i<n;i++)
    {
        int a = inf.readInt(0, 359, "a");
        inf.readSpace();
        int b = inf.readInt(1, 180, "b");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}