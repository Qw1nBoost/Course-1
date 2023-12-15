#include "functions.h"
#include "iostream"
/*
#16.Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
Если сумма наибольшего и наименьшего элементов матрицы равна нулю,
упорядочить элементы строк, в которых есть хотя бы один элемент,
содержащий цифру 8, по неубыванию.
*/

int main()
{
	// Определение переменных
	int n, m;
	int matrix[N_Max][N_Max];

	// Ввод
	la::Read(matrix, n, m);
	std::cout << '\n';

	// Определить, что сумма наименишего и наиб. элементов равна 0
	// Есть ли хотя бы 1 число, содержащее цифру 8
	//std::cout << la::isConsistEightInMatrix(matrix, n, m) << '\n';
	//std::cout << la::findSmallestElems(matrix, n, m) + la::findBiggestElems(matrix, n, m) << '\n';
	


	if ((la::findSmallestElems(matrix, n, m)+ la::findBiggestElems(matrix, n, m) == 0) /* && la::isConsistEightInMatrix(matrix, n, m)*/)
	{
		la::sortStr(matrix, n, m);
		la::Write(matrix, n, m);

	}


	// Вывод
	

	return 0;
}
