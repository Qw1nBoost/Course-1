#include <iostream>

int main()
{
	const int nMax = 100;
	const int mMax = 100;
	int N, M, a[nMax][mMax];
	// Ввод матрицы
	std::cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			std::cin >> a[i][j];
	// Вывод матрицы
	std::cout << "Matrix: \n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			std::cout << a[i][j] << " ";
		std::cout << '\n';
	}
	// Алгоритм проверки 
	int cMax = INT_MAX;
	int count = 0;
	int index;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (a[i][j] % 2 == 0) { count++; }
		}
		if (count < cMax) {
			cMax = count;
			index = i;
		}
	}

	for (int i = 0; i < N; i++) {
		a[index][i] *= a[index][i];
	}
	// Вывод матрицы
	std::cout << "New matrix: " << '\n';
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			std::cout << a[i][j] << " ";
		std::cout << '\n';
	}

}

