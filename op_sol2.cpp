#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int r, c, k;
	cin >> r >> c >> k;
	//dx is the horizontal distance of the rectangle(length)
	//dy is the vertical distance of the rectangle(width)
	//the '+1' in the formula is to account for the row/column the king is standing
	int dx=min(c+k, 8)-max(c-k, 1)+1;
	int dy=min(r+k, 8)-max(r-k, 1)+1;
	cout << dx*dy << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
