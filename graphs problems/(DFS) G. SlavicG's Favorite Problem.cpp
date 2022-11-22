
#include <bits/stdc++.h>
using namespace std;

///
#define int long long
#define wt getchar();
#define ttt cout<<"T"<<endl;
#define dbg1(x) cout<<#x<<": "<<x<<endl;
#define dbg2(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) dbg2(x,y)cout<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) dbg1(x)dbg3(x,y,z)cout<<#xx<<": "<<xx<<endl;
#define visar(x) for(int i:x) cout<<i<<" "; cout<<endl;
#define pb push_back
#define ts cout<<"TTTT"<<endl;
#define ty int t; cin >> t; while(t--)
const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 1e5 + 1;
const int inf  = 5e18 ;
const int minf = -inf ;

/// * order_of_key() find the number of elements smaller than x
/// * find_by_order() find the element present at the xth index
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree <int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> osthir;
/*er kaj+ order_of_key( ) , find_by_order() namer duita function ase,
suppose set st er kisu value ase 2 3 4 5 8
*st.find_by_order(4) returns 8(4th value)
*st.find_by_order(0) returns 2
order_of_key(4) returns 2( number of values less than 4
order_of_key(7) reutrns 4
*/


// map<int, priority_queue<int, vector<int>, greater<int>>>st;


vector<pair<int, int>>edges[200050];
bool vis[597851];
set<int>sET;

int st, ed;


void dfs(int n, int x)
{
    if (vis[n] == 1)return;
    // cout << n << " " << x << endl;
    if (ed != n)sET.insert(x);
    vis[n] = 1;
    for (auto it : edges[n])
    {
        dfs(it.first, x ^ it.second);
    }

}
int paisi = 0;

void dfs1(int n, int x)
{
    if (n == ed)return;
    if (paisi == 1)return;
    if (vis[n] == 1)return;
    vis[n] = 1;

    if (sET.count(x))
    {
        //  cout << "___:" << x << endl;
        paisi = 1;
        return;
    }
    for (auto it : edges[n])
    {
        dfs1(it.first, x ^ it.second);
    }

}

void kick(int CASE)
{

    int n;
    paisi = 0;
    cin >> n >> st >> ed;
    for (int i = 0; i < n + 2; i++)vis[i] = 0;

    for (int i = 1; i < n; ++i)
    {
        int x, y, c;
        cin >> x >> y >> c;
        edges[x].pb({y, c});
        edges[y].pb({x, c});

    }

    dfs(ed, 0);

    for (int i = 0; i <= n + 1; i++)vis[i] = 0;

    dfs1(st, 0);
    if (paisi == 0)
    {
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
    for (int i = 0; i <= n; ++i)
    {
        edges[i].clear();
        /* code */
    }
    sET.clear();

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

    int t = 1, i = 1;

    cin >> t;

    for ( ; i <= t; i++ )

    { kick ( i ); }




}
