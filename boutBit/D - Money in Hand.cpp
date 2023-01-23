#include <bits/stdc++.h>
using namespace std;

#define int long long
#define wt getchar();
#define ttt cout<<"T"<<endl;
#define dbg1(x) cout<<#x<<": "<<x<<endl;
#define dbg2(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<", "<<z<<", "<<#xx<<": "<<xx<<endl;
#define visar(x) for(int i:x) cout<<i<<" "; cout<<endl;
#define pb push_back
#define ts cout<<"TTTT"<<endl;
#define ty int t; cin >> t; while(t--)

const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 4e5 + 5;
const int inf  = 5e18 ;
const int minf = -inf ;



int32_t main()
{

#ifdef offCode
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    ios::sync_with_stdio ( 0 );
    cin.tie ( 0 );
    cout.tie ( 0 );

    function<void(int)>kick = [&](int tCase) {
        int n, x;
        cin >> n >> x;

        bitset<10005>s;
        s[0] = 1;
        vector<int>v;
        for (int i = 1; i <= n; i++) {
            int a, b; cin >> a >> b;
            for (int j = 1; j <= b; j++) {
                s |= s << a;
            }
        }

       if (s[x] == 1) {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    };

    int t = 1, i = 1;
    // cin >> t;
    for ( ; i <= t; i++ )

    { kick (i ); }
}
