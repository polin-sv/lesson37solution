#include <iostream>
using namespace std;

bool comparison(int x1, int y1, int x2, int y2) {
	if (x1 <= 0 || x2 <= 0
		|| y1 <= 0 || y2 <= 0) {
		return false;
	}

	return (x1 + y1) % 2 == (x2 + y2) % 2;
}

int main() {
	int x1, x2;
	int y1, y2;

	cout << "input x1 and y1: ";
	cin >> x1 >> y1;
	cout << "input x2 and y2: ";
	cin >> x2 >> y2;

	cout << comparison(x1, y1, x2, y2);

	return 0;
}
