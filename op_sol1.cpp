#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int r, c, k;
	cin >> r >> c >> k;
	int cnt=0;
	//check if the max horizontal/vertical distance of the destination cell is at most 'k'
	for(int i=1; i<=8; ++i)
		for(int j=1; j<=8; ++j)
			if(max(abs(i-r), abs(j-c))<=k)
				cnt++;
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
