#include <iostream>
using namespace std;

int N, S, cnt;
int arr[20];

void f(int i, int sum) {
	if (i == N) {
		if (sum == S) {
			cnt++;
		}
		return;
	}
	f(i + 1, sum); // ���� ���ڸ� ������ �ʴ� ���
	f(i + 1, sum + arr[i]); //���� ���ڸ� ���ϴ� ���
}

int main() {
	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	f(0, 0);
	if (S == 0) { //���ϴ� ���� 0�϶�, �ƹ��͵� ������ �ʾƼ� 0�� �Ǵ� ��� ����
		cnt--;
	}
	cout << cnt << endl;
}