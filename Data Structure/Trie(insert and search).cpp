// Insert and Searching
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

const int mod = 998244353, MAX = 3000005, INF = 1 << 30;

// const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 4e5 + 5;
const int inf  = 5e18 ;
const int minf = -inf ;

class Node {
public:
    Node *ar[28];
    bool flag = false;

    void setEnd() {
        flag = true;
    }
    bool hasCh(char ch) {
        return ar[ch - 'a'];
    }
    void putCh(char ch, Node *node) {
        ar[ch - 'a'] = node;
    }
    Node *getNode(char ch) {
        return ar[ch - 'a'];
    }
    bool isEnd() {
        return flag;
    }
};

class Trie {
    Node *root;
public:
    Trie() {
        root = new Node();
    }
    void take(string word) {
        Node *node = root;
        for (char ch : word) {
            if (!node->hasCh(ch)) {
                node->putCh(ch, new Node());
            }
            node = node->getNode(ch);
        }
        node->setEnd();
    }

    bool search(string word) {
        Node *node = root;
        for (char ch : word) {
            if (!node->hasCh(ch))return false;
            node = node->getNode(ch);
        }
        return node->isEnd();
    }
};

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


    Trie firstTrie;
    firstTrie.take("bismillah");
    firstTrie.take("apple");
    firstTrie.take("map");
    firstTrie.take("cat");

    cout << firstTrie.search("bismillah");

    cout << firstTrie.search("apple");

    cout << firstTrie.search("app");

    cout << firstTrie.search("cay");
}
