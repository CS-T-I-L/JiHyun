#include <iostream>
using namespace std;

bool push[10]; //���� �� �ִ� ��ư

int possible(int n) {
	if (n == 0) { //0���϶�
		if (push[0]) {
			return 0; //���峭 ��ư�� �� true
		}
		else {
			return 1;
		}
	}

	int len = 0;
	while (n > 0) {
		if (push[n % 10]) { //1-9���� �� ��ȣ�� �˾ƺ��� ����
			return 0;
		}
		len++;
		n /= 10;
	}
	return len;
}

int main() {
	int N; //�̵��Ϸ��� ä��
	int M; //���峭 ��ư ����
	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int B;
		cin >> B;
		push[B] = true; //���峭 ��ư -> true
	}

	//+,-�� ����ؼ� �̵��ϴ� ���
	int move = N - 100;
	if (move < 0) {
		move = -move; //���� ���ϱ�� ����
	}

	//ä�� �̵��� +,- ����ؼ� �̵��ϴ� ���
	for (int i = 0; i <= 1000000; i++) {
		int c = i; //�̵��Ϸ��� ä��
		int len = possible(c);

		if (len > 0) { //len�� 0�̸� ���峭 ��ư�� ���ԵǾ� ���� 
			int press = c - N; //c�� ä�� �̵� ��, +,-�� �ϴ� �� �����

			if (press < 0) {
				press = -press;
			}
			if (move > len + press) {
				move = len + press;
			}
		}
	}
	cout << move << endl;
}