#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 3, b = 4, c = 5;
	tuple<int, int, int> t = tie(a, b, c);
    // Can use only constants with get<k>t in place of k, otherwise it gives errors
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
	get<0>(t) = 7;
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

	tuple<string, string, int> tp2 = make_tuple("Hello", "world", 100);
	string s1, s2; int x;
	tie(s1, s2, x) = tp2;
	cout << s1 << " " << s2 << " " << x << endl;
}

/* Output:
3 4 5
7 4 5
Hello world 100
*/