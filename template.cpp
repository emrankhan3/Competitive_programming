#include <bits/stdc++.h>
using namespace std;

#define int long long
#define wt getchar();
#define ttt cout<<"T"<<endl;
#define dbg1(x) cerr<<#x<<": "<<x<<endl;
#define dbg2(x,y) cerr<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) cerr<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) cerr<<#x<<": "<<x<<", "<<#y<<": "<<y<<", "<<#z<<", "<<z<<", "<<#xx<<": "<<xx<<endl;

#define visar(x) for(int i:x) cerr<<i<<" "; cout<<endl;

#define pb push_back
#define ts cerr<<"TTTT"<<endl;
#define ty int t; cin >> t; while(t--)

// const int mod = 998244353, MAX = 3000005, INF = 1 << 30;
template <typename Ta>
void ddd(Ta a){
    dbg1(a)
}
template <typename Ta, typename tb>
void ddd(Ta a, tb b){
    dbg2(a,b)
}
template <typename Ta, typename tb, typename tc>
void ddd(Ta a, tb b,tc c){
    dbg3(a,b,c)
}
template <typename Ta, typename tb, typename tc, typename td>
void ddd(Ta a, tb b,tc c,td d){
    dbg4(a,b,c,d)
}

template <typename Ta>
Ta min(Ta a, Ta b, Ta c){return min(a,min(b,c));}
template <typename Ta>
Ta min(Ta a, Ta b, Ta c,Ta d){return min(a,min(b,c,d));}
template <typename Ta>
Ta max(Ta a, Ta b, Ta c){return max(a,max(b,c));}
template <typename Ta>
Ta max(Ta a, Ta b, Ta c,Ta d){return max(a,max(b,c,d));}

const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 4e5 + 5;
const int inf  = 5e18 ;
const int minf = -inf ;

int Bexpo(int b,int p){
    int a=1;
    if(p==0)return 0;
    while(p>0){
        if(p&1){
            a*=b;
            a%=mod;
        }
        p>>=1;
        b*=b;
        b%=mod;
    }
    return a;
}


int32_t main()
{

#ifdef emran
    ifstream cin("input.txt");
    ofstream cout("output.txt");
#endif

    ios::sync_with_stdio ( 0 );
    cin.tie ( 0 );
    cout.tie ( 0 );

    function<void(int)>kick = [&](int tc){


    };


}
