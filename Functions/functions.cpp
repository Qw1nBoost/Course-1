﻿#include "functions.h"
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

	bool isConsistEightInMatrix(int matrix[N_Max][N_Max], int n, int m)
	{
		/*
		for (int i = 0; i < n; i++)
		{
			bool flag = false; 
			for (int j = 0; j < m; j++)
				if (isConsistEight(matrix[i][j]))
					flag = true;
			if (!flag)
				return false;
		}
		return true;*/
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (isConsistEight(matrix[i][j])) return true;
			}
		}
	}

	int findBiggestElems(int matrix[N_Max][N_Max], int n, int m)
	{
		int maxi = -1000000;
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
		int mini = 1000000;
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
			for (int j = 0; j < m; i++) {
				if (isConsistEight(matrix[i][j])) {
					
					Sorting(matrix[i], m);
					break;
				}
			}
		}
	}
}