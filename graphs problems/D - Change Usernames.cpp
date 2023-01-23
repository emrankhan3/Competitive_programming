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

int pw(int n) {
    if (n == 0)return 1;
    int v = 1;
    while (n--)v *= 31;
    return v;
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
        int n;
        cin >> n;
        map<int, int>mp;
        set<int>st;
        for (int i = 1; i <= n; i++) {
            string a, b;
            cin >> a >> b;
            int aa = 0, bb = 0;
            for (int i = 0; i < (int)a.size(); i++) {

                aa += ((int)(a[i] - 'a' + 1)) * pw(i);
            }

            for (int i = 0; i < (int)b.size(); i++) {

                bb += ((int)(b[i] - 'a' + 1)) * pw(i);
            }

            mp[aa] = bb;
            st.insert(aa);
            st.insert(bb);
        }
        bool flag = true;
        map<int, int>vis;
        function<void(int, int)>fun = [&](int anc, int n) {
            vis[n] = 1;
            if (n == anc) {
                // dbg1(n)
                cout << "No" << endl;
                flag = false;
                return;
            }
            if (mp[n] != 0)fun(anc, mp[n]);
        };

        for (int ss : st) {
            if (vis[ss])continue;

            if (mp[ss] != 0 && flag)
                fun(ss, mp[ss]);
        }
        if (flag)
            cout << "Yes" << endl;

    };



    int t = 1, i = 1;
    // cin >> t;
    for ( ; i <= t; i++ )

    { kick (i ); }
    // a b c d e ...z   aa  ab ac... az  ba..bz ..ca
    // 1            26  27  28       52  53
}
