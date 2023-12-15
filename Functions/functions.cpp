#include "functions.h"
#include <iostream>
#include <cmath>
#define N_Max 100

namespace la
{
	void Read(int matrix[N_Max][N_Max], int& n, int& m)
	{
		std::cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				std::cin >> matrix[i][j];
	}

	void Write(int matrix[N_Max][N_Max], int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				std::cout << matrix[i][j] << " ";
			std::cout << std::endl;
		}
	}

	bool isConsistEight(int x)
	{
		x = abs(x);
		while (x)
		{
			if (x % 10 == 8)
				return true;
			x /= 10;
		}
		return false;
	}

	bool isConsistEightInStr(int matrix[N_Max], int m)
	{
		for (int i = 0; i < m; i++) {
			if (isConsistEight(matrix[i])) return true;
		}
	}

	int findBiggestElems(int matrix[N_Max][N_Max], int n, int m)
	{
		int maxi = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (matrix[i][j] > maxi) {
					maxi = matrix[i][j];
				}
			}
		}
		return maxi;
	}

	int findSmallestElems(int matrix[N_Max][N_Max], int n, int m)
	{
		int mini = INT_MAX;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (matrix[i][j] < mini) {
					mini = matrix[i][j];
				}
			}
		}
		return mini;
	}

	void Sorting(int mass[N_Max], int m)
	{
		for (int k = 0; k < m-1; k++) {
			for (int q = k+1; q < m; q++) {
				if (mass[k] > mass[q]) {
					int tmp = mass[k];
					mass[k] = mass[q];
					mass[q] = tmp;
				}
			}
		}
	}

	void sortStr(int matrix[N_Max][N_Max], int n, int m)
	{
		for (int i = 0; i < n; i++) {
			
			if (isConsistEightInStr(matrix[i], m)) {	
				Sorting(matrix[i], m);
				
			}
			
		}
	}
}
