#include "testlib.h"
#include <set>
using namespace std;

set<int> st;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = 100000;
    cout<<n<<'\n';
    for(int i=100000000-n+1;i<=100000000;i++)
    {
        cout<<i;
        if(i<100000000) cout<<' ';
    }
    cout<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<100000000;
        if(i<n-1) cout<<' ';
    }
    cout<<'\n';
    return 0;
}