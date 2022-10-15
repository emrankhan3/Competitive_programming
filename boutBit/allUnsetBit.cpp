#include<bits/stdc++.h>
using namespace std;

unsigned allUnsetBits ( int n ) {
    int v = 1;
    int ans = 0;

    for ( int i = 0; ( 1 << i ) < n; i++ ) {
        if ( ( n & ( v << i ) ) == 0 ) {
            ans += ( v << i );
        }

        // cout<<(v<<i)<<" "<<(n&(v<<i))<<endl;
    }

    return ans;

}

int main()
{
cout<<allUnsetBits(42)+42+1; // next power of 2 val: 64

}
