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




void kick(int CASE=4)
{   
    int n;
    cin >>n;
    int ar[n+1],br[n+1],cr[n+1];
    
    int dp1[n+1]={0};
    int dp2[n+1]={0};
    int dp3[n+1]={0};

    for(int i=1; i<=n; i++)
    {
        cin >> ar[i] >> br[i] >> cr[i];
    }

    for(int i=1; i<=n ;i++)
    {
        dp1[i]=max(dp2[i-1],dp3[i-1])+ar[i];
        dp2[i]=max(dp1[i-1],dp3[i-1])+br[i];
        dp3[i]=max(dp2[i-1],dp1[i-1])+cr[i];
    }
    cout<<max(dp1[n],max(dp2[n],dp3[n]));

 
}

int32_t main()
{
    
#ifdef home
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios::sync_with_stdio ( 0 );
    cin.tie ( 0 );
    cout.tie ( 0 );

  // int t = 1, i = 1; cin >> t; for ( ; i <= t; i++ ) 
   { kick (); }



}
