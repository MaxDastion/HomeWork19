#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector <int> v = { 2, 2, 2, 2, 3, 3, 3 };
	for (size_t i = 0; v.size() >= 0; i++)
	{
		if (v.size() == 0) {
			cout << i;
			return;
		}
		
		if (v.size() == 1) {
			cout << -1;
			return;
		}
		if (v.size()%2 == 0 && v.size() != 0) {
			v.pop_back();
			v.pop_back();
		}
		if (v.size() >= 3) {
			v.pop_back();
			v.pop_back();
			v.pop_back();
		}
		
		// heh

	}
}