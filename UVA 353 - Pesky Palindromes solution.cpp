//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

bool palind(string s) {
	for (unsigned int i = 0, f = s.size() - 1; i < s.size() / 2; i++, f--)
		if (s[i] != s[f])
			return false;
	return true;
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 353 - Pesky Palindromes
	string s, ss;
	set < string > se;
	while (cin >> s) {
		se.clear();
		for (int i = 0; i < s.size(); i++)
			for (int k = i; k < s.size(); k++) {
				ss = s.substr(i, k - i + 1);
				if (palind(ss))
					se.insert(ss);
			}
		cout << "The string '" << s << "' contains " << se.size()
				<< " palindromes.\n";
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
