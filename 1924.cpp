#include<iostream>
using namespace std;
int main() {
	int month[5][7] = { 0 };
	int num = 1; //�� Check
	int start = 0; //�� ���� 1�� ������
	int day; //���� Check
	int x, y;
	cin >> x;
	cin>> y;
	
	//2007�� �� ���� ��¥ �Է�
	switch (x) {
	case 1:
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
			}
		}
		break;
	case 2:
		start =3;
		if (num <= 28) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 3:
		start =3;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 4:
		start = 6;
		if (num <= 30) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 5:
		start = 1;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 6:
		start = 4;
		if (num <= 30) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 7:
		start = 6;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 8:
		start = 2;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 9:
		start = 5;
		if (num <= 30) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 10:
		start = 0;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 11:
		start = 3;
		if (num <= 30) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;
	case 12:
		start = 5;
		if (num <= 31) {
			for (int i = 0; i < 5; i++) {
				for (int j = start; j < 7; j++) {
					month[i][j] = num;
					num++;
				}
				start = 0;
			}
		}
		break;

	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (month[i][j] == y)
				 day = j;
		}
	}//�Էµ� x�� y���� ���� ã��

	switch (day) {
	case 0:
		cout << "MON";
		break;
	case 1:
		cout << "TUE";
		break;
	case 2:
		cout << "WED";
		break;
	case 3:
		cout << "THU";
		break;
	case 4:
		cout << "FRI";
		break;
	case 5:
		cout << "SAT";
		break;
	case 6:
		cout << "SUN";
		break;

	}
	return 0;
}