// md2202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N=0;
	do {
		cout << "Enter N="; cin >> N;
	} while (N < 0);
	// 1 uzd
	bool active = true;
	for (int i = 1; i <= N; i++) {
		if (!active) break;
		for (int b = i+1; b <= N; b++) {
			for (int c = b+1; c <= N; c++) {
				int		ns = (i*i*i) + (b*b*b) + (c*c*c);
				if (ns == N) { 
					cout << N << "="<< i << "^3+" << b << "^3+" << c << "^3 \n"; active = false; 
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
				int ns = i*	i + b*b;
				if (ns == c*c) {
					cout << i << "+" << b << "=" << c << "\n"; ;
				}
			}
		}
	}	


	system("pause");
}
