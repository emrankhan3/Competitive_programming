

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ttt cout<<"-----T-----"<<endl;
#define dbg1(x) cout<<#x<<": "<<x<<endl;
#define dbg2(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<", "<<z<<", "<<#xx<<": "<<xx<<endl;
#define visar(x) for(int i:x) cout<<i<<" "; cout<<endl;
#define pb push_back
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
#define ty int t; cin >> t; while(t--)
#define tcs(x) cout<<"Case "<<x<<": ";
#define mkp make_pair
// #define inf 1000000000000000005
// const int mod = 998244353, MAX = 3000005, INF = 1 << 30;
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End

// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;


const ll mod = 1e9 + 7;

const int eps  = 1e-9 ;
const int maxn = 4e5 + 5;
const int inf  = 5e18 ;
const int minf = -inf ;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b)
{a %= mod; ll res = 1;
 while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;}
  return res;}

void rd ( ll &a )
{
    scanf ( "%lld", &a );
}
void rd(int &a){
    scanf("%d",&a);
}
#define M 2000006
using namespace std;
ll n,value,t,cas=1;
vector<int>vec,prime,Adj[M];
bool vis[M+4];
int frq[M];
void sieve(){
    prime.push_back(2);
    for(int i=2;i<M;i+=2)
        Adj[i].push_back(2);
    for(int i=3;i*i<=M;i+=2){
        if(vis[i]==0){
            for(int j=i*i;j<=M;j+=i)
                vis[j] = 1;
        }
    }

    for(int i=3;i<M;i+=2){
        if(vis[i]==0){
            for(int j=i;j<M;j+=i)
                Adj[j].push_back(i);
        }
    }

}
bitset<20000000>bs;
int chk[200050];
int32_t main()
{

#ifdef emran
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    freopen ( "error.txt", "w", stderr );
#endif

    ios::sync_with_stdio ( 0 );
    cin.tie ( 0 );
    cout.tie ( 0 );
   // sieve();

    function<void ( int ) >kick = [&] ( int asdf ) {
        ll n,k;
        cin>>n>>k;
        int freq[n+100]={0};
        vector<int>v;
        for (int i=1; i<=n; i++ )
        {
            int x;
            cin >> x;
            freq[x]++;
            v.pb(x);
        }
        int x=v[0];
        ll cn=0;
        if(freq[v[0]]>=k && v[n-1]==v[0]){
            cout<<"YES"<<endl;
            return;
        }


        for(int i=0; i<n; i++){
            if(x==v[i])cn++;

            freq[v[i]]--;

            if(cn==k){
                if(freq[v[n-1]]>=k){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;

                return;            }

        }
        if(cn!=k){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;

    };

ty
    kick ( 8 );


}
