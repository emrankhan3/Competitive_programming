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




int32_t main()
{

#ifdef offCode
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    // ios::sync_with_stdio ( 0 );
    // cin.tie ( 0 );
    // cout.tie ( 0 );

    function<void(int)>kick = [&](int tCase) {
        int n;
        cin >> n;
        int food[n + 4];
        for (int i = 1; i <= n; i++) {
            cin >> food[i];
        }
        int foodd[305][305] = {0};

        vector<int>v[n + 1];
        int dist[305][305] = {0};

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 300; j++) {
                dist[i][j] = 9999999;
            }
        }
        for (int i = 1; i <= n; i++) {
            dist[i][i] = 0;
        }

        for (int i = 1; i < n + 1; ++i)
        {
            string s; cin >> s;
            for (int j = 1; j <= n; j++) {
                if (s[j - 1] == 'Y') {

                    dist[i][j] = 1;

                    foodd[i][j] = food[j];
                }

            }
        }

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (dist[i][j] > dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        foodd[i][j] = foodd[i][k] + foodd[k][j];
                    }
                    else if (dist[i][j] == dist[i][k] + dist[k][j]) {

                        foodd[i][j] = max(foodd[i][j], foodd[i][k] + foodd[k][j]);
                    }

                }
            }
        }
        int q; cin >> q;
        while (q--) {
            int s, d; cin >> s >> d;
            if (dist[s][d] == 9999999) {
                cout << "Impossible" << endl;
            }
            else {
                cout << dist[s][d] << " " << foodd[s][d] + food[s] << endl;
            }
        }



    };



    int t = 1, i = 1;
// cin >> t;
    for ( ; i <= t; i++ )

    { kick (i ); }


}
