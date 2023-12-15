#pragma once
#define N_Max 100

namespace la
{
	void Read(int matrix[N_Max][N_Max], int& n, int& m);

	void Write(int matrix[N_Max][N_Max], int n, int m);

	bool isConsistEight(int x);

	int findBiggestElems(int matrix[N_Max][N_Max], int n, int m);

	int findSmallestElems(int matrix[N_Max][N_Max], int n, int m);

	void sortStr(int matrix[N_Max][N_Max], int n, int m);

	void Sorting(int mass[N_Max], int m);

	bool isConsistEightInStr(int matrix[N_Max], int m);

}
