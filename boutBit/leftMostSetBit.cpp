#include<bits/stdc++.h>
using namespace std;

unsigned leftMostSetBit ( int n ) {
    int mx = 0;
    int v = 1;

    for ( int i = 0; i < 33; i++ ) {
        if ( n & ( v ) ) {
            mx = max ( mx, i );
        }

        v <<= 1;
    }

    return mx + 1;

}
int main()
{
cout<<leftMostSetBit(15); //4
}
