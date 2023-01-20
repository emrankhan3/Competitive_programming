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

// const int mod = 998244353, MAX = 3000005, INF = 1 << 30;



const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 4e5 + 5;
const int inf  = 5e18 ;
const int minf = -inf ;


bool r[100000000];

int bMod(int n, int p) {
    if (p == 0)return 1;
    if (p & 1) {
        int store =  bMod(n, p / 2);
        return (((store) % mod) * ((store) % mod) * n) % mod;
    }
    int store = bMod(n, p / 2);
    return ((store % mod) * (store % mod)) % mod;
}


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
        cout << "Case " << tCase << ": ";
        int n; cin >> n;
        string s; cin >> s;
        vector<int>v[1000050];
        for (int i = 1; i <= n - 1; i++) {
            int x, y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bool vis[1000500] = {0};
        int cn1, cn2;
        cn1 = cn2 = 0;
        function< void(int , int, int, int, int) >  dfs = [&](int u, int p, int fhash, int bhash, int pw) {
            //  dbg2(u, vis[u])
            if (vis[u])return;
            vis[u] = true;
            //  ts
            int ch = (int)( s[u - 1] - 'A' ) + 1;

            fhash = fhash + ch * pw;
            pw *= 29; pw %= mod;
            bhash = (bhash * 29) % mod + ch;
            cn2++;
            //  dbg2(bhash, fhash)

            if (bhash == fhash)cn1++;

            for (int child : v[u]) {
                dfs(child, p + 1, fhash, bhash, pw);
            }
        };

        dfs(1, 0, 0, 0, 1);
        int g = __gcd(cn1, cn2);
        cout << cn1 / g << "/" << cn2 / g << endl;


    };



    int t = 1, i = 1;
    cin >> t;
    for ( ; i <= t; i++ )

    { kick (i ); }


}
