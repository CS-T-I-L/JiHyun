#include <iostream>
using namespace std;

int main() {
	int K; //ó�� ��ź�� ��� �ִ� ��� ��ȣ
	int N; //������ ����
	int T; //����ϱ���� �ɸ� �ð�
	char Z; // �÷��̾��� ��� ����

	cin >> K;
	cin >> N;

	int bomb = 210; //3�� 30��
	int time = 0; //����ϱ���� �ɸ� �ð� �հ�

	for (int i = 0; i < N; i++) {
		cin >> T >> Z;

		time += T;

		if (time >= bomb) { //210�ʰ� ������ break
			cout << K << endl;
			break;
		}
		if (Z == 'T') { //������ ��쿡�� ���� ������� �佺
			K++;
			if (K == 9) {
				K = 1;
			}
		}
	}
}