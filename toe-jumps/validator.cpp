#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    string tmp;
    inf.readString("[EWSN]", tmp);
    inf.readString("[.IOP][.IOP]", tmp);
    inf.readString("[.IOP][.IOP]", tmp);
    inf.readEof();
    return 0;
}