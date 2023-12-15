#include <iostream>

// В случае, если в первой строке например 1 четное число, а во второй нет четных чисел,
// то в квадрат возведется первая строка, потому что в ней есть четные числа(по условию задачи).
// Если же нигде не будет четных чисел, то первая строка возведется в квадрат.

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
	int cMax = 100000;
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

