#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, a[100000];

void solve() {
	cin >> n;
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    cin >> a[i];
  }

  for (size_t i = 0; i < n-2; i++) {
    if (a[i] == a[i+1]) {
      /* code */
      
    }
  }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}
