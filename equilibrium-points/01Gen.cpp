#include "testlib.h"
#include <set>
using namespace std;

set<int> st;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = rnd.next(2, 100000);
    cout<<n<<'\n';

    st.insert(0);
    cout<<0<<' ';
    for(int i=1;i<n;i++)
    {
        int x;
        while(1)
        {
            x = rnd.next(1, 100000000);
            if(st.find(x)==st.end())
            {
                st.insert(x);
                cout<<x;
                break;
            }
        }
        if(i<n-1) cout<<' ';
    }
    cout<<'\n';

    cout<<1<<' ';
    for(int i=1;i<n;i++)
    {
        cout<<rnd.next(1, 100000000);
        if(i<n-1) cout<<' ';
    }
    cout<<'\n';

    return 0;
}