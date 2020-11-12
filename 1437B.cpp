#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n;
string s;

void solve() {
	cin >> n;
  cin >> s;
	int ans = int(1e9);
	for (size_t i = 0; i < 2; i++) {
		string temp;
		temp = string(1, '0' + i) + s + string(1, '1' - i);
		int ansTemp = 0;
		for (size_t j = 0; j < temp.size()-1; j++) {
			if (temp[j] == temp[j+1]) {
				ansTemp += 1;
			}
		}

		ans = min(ans, ansTemp / 2);
	}
  cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}
