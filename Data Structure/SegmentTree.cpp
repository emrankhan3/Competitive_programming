
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define wt getchar();
#define ttt cout<<"T"<<endl;
#define dbg1(x) cout<<#x<<": "<<x<<endl;
#define dbg2(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) dbg2(x,y)cout<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) dbg1(x)dbg3(x,y,z)cout<<#xx<<": "<<xx<<endl;
#define visar(x) for(int i:x) cout<<i<<" "; cout<<endl;
#define ty int t; cin >> t; while(t--)

int arr[1000];
int tree[1000];

int n = 5;
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

	function<void(int)>kick = [&](int tcase) {
		function<void(int, int, int)> init = [&] (int node, int l, int r) {
			if (l == r) {
				tree[node] = arr[r];
				return;
			}
			init(node * 2, l, (l + r) / 2);
			init(node * 2 + 1, (l + r) / 2 + 1, r);
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		};
		function<int(int, int, int, int, int)> query = [&] (int node, int l, int r, int i, int j) {
			if (i > r || j < l)return 0ll;
			if (i <= l && j >= r)return tree[node];
			int left =  query(node * 2, l, (l + r) / 2, i, j);
			int right = query(node * 2 + 1, (l + r) / 2 + 1, r, i, j);
			return left + right;
		};
		function<void(int, int, int, int, int)>update = [&](int node, int l, int r, int idx, int val) {
			if (idx > r || idx < l)return;
			if (l == r && l == idx) {
				arr[idx] = val;
				tree[node] = val;
				return;
			}
			update(node * 2, l, (l + r) / 2, idx, val);
			update(node * 2 + 1, (l + r) / 2 + 1, r, idx, val);
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		};

		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			//dbg1(arr[i])
		}
		init(1, 1, n);

		int l, r; cin >> l >> r;

		cout << query(1, 1, n, l, r) << endl;
		int id, v; cin >> id >> v;
		update(1, 1, n, id, v);
		cout << query(1, 1, n, l, r);

	};

	int t = 1, i = 1;

	for ( ; i <= t; i++ )

	{ kick ( i ); }



}
