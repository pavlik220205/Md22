
#include "pch.h"
#include <iostream>
using namespace std;
void printnum(int a, int b, int c) {
	for (int i = 1; i <= a; i++)
	{
		if (i == 1) {
			cout << 2;
		}
		else
		{
			cout << "+" << 2;
		}

	}
	for (int i = 1; i <= b; i++)
	{
		if (i == 1 && a == 0) {
			cout << 5;
		}
		else
		{
			cout << "+" << 5;
		}
	}
	for (int i = 1; i <= c; i++)
	{
		if (i == 1 && a == 0 && b == 0) {
			cout << 10;
		}
		else
		{
			cout << "+" << 10;
		}
	}
	cout << "\n";
}

int main()
{
	int N = 0;
	do {
		cout << "Enter N="; cin >> N;
	} while (N < 0);
	// 1 uzd
	//bool active = true;
	//for (int i = 1; i <= N; i++) {
	//	if (!active) break;
	//	for (int b = i + 1; b <= N; b++) {
	//		if (!active) break;
	//		for (int c = b + 1; c <= N; c++) {
	//			if ((i*i*i) + (b*b*b) + (c*c*c) == N) {
	//							cout << N << "=" << i << "^3+" << b << "^3+" << c << "^3 \n"; active = false break;;
	//			}
	//		}
	//	}
	//}
	//if (active) {
	//	cout << "1) Number Not Found \n";
	//}
	////2 uzd
	//for (int i = 1; i < N; i++) {
	//	for (int b = i + 1; b <= N; b++) {
	//		for (int c = b + 1; c <= N; c++) {
	//			if (i*	i + b * b == c * c) {
	//								cout << i << "+" << b << "=" << c << "\n"; ;
	//			}
	//		}
	//	}
	//}

	// 3 Uzd;

	for (int i = 0; i <= N / 2; i++) {
		for (int b = 0; b <= N / 2; b++) {
			for (int c = 0; c <= N / 2; c++) {
				if (i * 2 + b * 5 + c * 10 == N)
					printnum(i, b, c);
			}
		}
	}

	// 4 Uzd;
	int a=-1, g=0, h=0;
	for (int i = 0; i <= N/2; i++)
	{
		for (int b = 0; b <= N/5; b++)
		{
			for (int c = 0; c <= N/9; c++)
			{
				if ((i * 2) + (b * 5) + (c * 9) == N) {
					if (a == -1) {
					a = i; g = b; h = c;
					}
					else if (a + g + h > i + b + c) {
						a = i; g = b; h = c;
					}
				}
			}
		}
	}
	cout << "N=" << a << "*2+" << g << "*5+" << h << "*9\n";
	system("pause");
}
