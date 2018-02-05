#include<iostream>
using namespace std;

int main() {
	int T;
	int n, k;
	
	int department[15][15] = {0};
	for (int i = 1; i <= 14; i++) {
		department[0][i] = i;
	}

	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <=14; j++) {
			if (j == 1)
				department[i][j] = 1;
			else{
					for(int jj=j;jj>0;jj--){
					department[i][j] += department[i - 1][jj];
					}
				}
			}
		}
	
	cin >> T;	
	while (T) {
		cin >> k;
		cin >> n;
		cout << department[k][n]<<endl;
		T--;
	}

}