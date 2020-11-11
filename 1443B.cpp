#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int a, b;

void solve() {
	cin >> a >> b;
	string s;
	cin >> s;
	int ans = a;
	int first = -1;
	int last = -1;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '1')	
		{
			first = i;
			break;
		}
		 
	}

	for (int i = s.size() - 1; i >= 0; --i)
	{
		if (s[i] == '1')
		{
			last = i;
			break;
		}
	}

	if (first == last && first == -1)
	{
		/* code */
		cout << 0 << "\n";
		return;
	}


	for (int i = first; i <= last; ++i)
	{
		int c = 0;
		 while(s[i] == '0') {
		     c++;
		     i++;
		 }
	 ans += min(a, b*c);
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}