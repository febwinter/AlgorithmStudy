#include<cstdio>
#include<vector>
#include<iostream>
#include<string>

#pragma warning(disable : 4996)

using namespace std;



int main() {
	
	string s;

	cin >> s;

	vector<int>sign;
	vector<int>num;

	sign.push_back(1);
	int cur = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+') sign.push_back(1);
			else sign.push_back(-1);

			num.push_back(cur);
			cur = 0;
		}
		else {
			cur = cur * 10 + (s[i] - '0');
			
		}
	}
	num.push_back(cur);
	

	bool minus = false;
	int ans = 0;

	for (int i = 0; i < num.size(); i++) {
		if (sign[i] == -1) {
			minus = true;
		}
		if (minus) ans -= num[i];
		else ans += num[i];
	}

	printf("%d\n", ans);

	return 0;

}