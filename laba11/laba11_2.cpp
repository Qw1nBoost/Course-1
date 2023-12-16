#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int rows, cols;
	cout << "Введите количество строк и столбцов: ";
	cin >> rows >> cols;
	vector<vector<int>> matrix(rows, vector<int>(cols));
	//Ввод матрицы
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cout << "Элемент [" << i << "," << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}

	//Вывод матрицы
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << matrix[i][j] << " ";
		cout << '\n';
	}

	int cMax = rows;
	int count = 0;
	int index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] % 2 == 0) { count++; }
		}
		if (count < cMax) {
			cMax = count;
			index = i;
		}
	}

	for (int i = 0; i < cols; i++) {
		matrix[index][i] *= matrix[index][i];
	}
	
	std::cout << "New matrix: " << '\n';
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << matrix[i][j] << " ";
		cout << '\n';
	}
	
}
