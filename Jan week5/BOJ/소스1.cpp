#include <iostream>
using namespace std;

//2455 <지능형 기차>
int main() {
	int off, on;
	int now = 0;
	int many = 0;

	for (int i = 0; i < 4; i++) {
		cin >> off >> on;

		now = now - off + on;
		if (now > many) {
			many = now;
		}
	}

	cout << many << endl;
}