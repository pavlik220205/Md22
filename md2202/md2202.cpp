
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int N = 0;
	do {
		cout << "Enter N="; cin >> N;
	} while (N < 0);
	// 1 uzd
	bool active = true;
	for (int i = 1; i <= N; i++) {
		if (!active) break;
		for (int b = i + 1; b <= N; b++) {
			if (!active) break;
			for (int c = b + 1; c <= N; c++) {
				if ((i*i*i) + (b*b*b) + (c*c*c) == N) {
					//			cout << N << "=" << i << "^3+" << b << "^3+" << c << "^3 \n"; active = false break;;
				}
			}
		}
	}
	if (active) {
		cout << "1) Number Not Found \n";
	}
	//2 uzd
	for (int i = 1; i < N; i++) {
		for (int b = i + 1; b <= N; b++) {
			for (int c = b + 1; c <= N; c++) {
				if (i*	i + b * b == c * c) {
					//				cout << i << "+" << b << "=" << c << "\n"; ;
				}
			}
		}
	}



	// 3 Uzd;
	if (N >= 10) {
		int d = 0, db = 0, db1 = 0, db2 = 0;
		if (N % 2 != 0) {
			d = N - 5;
		}
		else {
			d = N;
		}
		for (int i = 1; i <= d; i++) {
			if (i * 5 <= N ) db1++;
			if (i * 10 <= N) db2++;
			if (i * 2 <= d) db++;
		} 
		int as = 0;
		for (int i = 0; i <= db; i++) {
			if (i != db) {
				as += 2;
				if (i == 0) cout << "\n2";
				else cout << "+2";
			}
			else {
				if (as != N && as != 0) {
					if (as + 5 == N) {
						cout << "+5";
						as += 5;
					}
				}
			}
		}
		as = 0;
		for (int i = 0; i <= db1; i++) {
			if (db1 * 5 + 2 != N && db1 * 5 != N) break;
			if (i != db1) {
				as += 5;
				if (i == 0) cout << "\n5";
				else cout << "+5";
			}
			else {
				if (as != N && as != 0) {
					if (as + 2 == N) {
						cout << "+2";
						as += 2;

					}
				}
			}
		}
		as = 0;
		for (int i = 0; i <= db2; i++) {
			if ((N - db2*10) / 2 * 2 + db2 * 10 != N && db2*10 + 5 != N ) break;
			if (i != db2) {
				as += 10;
				if (i == 0) cout << "\n10";
				else cout << "+10";
			}
			else {
				if (as != N && as != 0) {
					if ((N - as) / 2 * 2 + as == N) {
						for (int b = 0; b <= (N - as) / 2; b++)
						{
							cout << "+2";
							as += 2;
						}
					}
					if (as + 5 == N) {
						cout << "+5";
						as += 5;
					}
				}
			}
		}
	}
	system("pause");
}
