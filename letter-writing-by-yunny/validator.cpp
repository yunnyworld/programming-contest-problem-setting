#include "testlib.h"

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    int N = inf.readInt(1, 100000);
    inf.readEoln();
    for(int i=0;i<N;i++)
    {
        inf.readToken("[0-9]{4}-[0-9]{2}");
        inf.readSpace();
        inf.readToken("[0-9]{4}-[0-9]{2}");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}
