#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int _min = 64; //���� ���� ��ĥ�ؾ��ϴ� ĭ�� ����(8x8)
	int color = 0;

	char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};

	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

	char arr[51][51];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	//8x8�� �ڸ��°� ��� �������� ���ϴ� for��
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int bw = 0;
			int wb = 0;

			//�߶� 8x8���� ���� ���ذ� ������ �ٸ��� ��
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (arr[i + k][j + l] != WB[k][l]) {
						wb++; //�ٽ� ��ĥ�ؾ��ϴ� ����++
					}
					if (arr[i + k][j + l] != BW[k][l]) {
						bw++; //�ٽ� ��ĥ�ؾ��ϴ� ����++
					}
				}
			}
			color = min(wb, bw);
			if (color <= _min) {
				_min = color;
			}
		}
	}
	cout << _min << endl;
}