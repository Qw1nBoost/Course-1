#include "functions.h"
#include "iostream"
/*
#16.���� ������������� ������� {Aij}i=1...n;j=1..n , n<=100.
���� ����� ����������� � ����������� ��������� ������� ����� ����,
����������� �������� �����, � ������� ���� ���� �� ���� �������,
���������� ����� 8, �� ����������.
*/

int main()
{
	// ����������� ����������
	int n, m;
	int matrix[N_Max][N_Max];

	// ����
	la::Read(matrix, n, m);
	std::cout << '\n';

	// ����������, ��� ����� ����������� � ����. ��������� ����� 0
	// ���� �� ���� �� 1 �����, ���������� ����� 8
	//std::cout << la::isConsistEightInMatrix(matrix, n, m) << '\n';
	//std::cout << la::findSmallestElems(matrix, n, m) + la::findBiggestElems(matrix, n, m) << '\n';
	


	if ((la::findSmallestElems(matrix, n, m)+ la::findBiggestElems(matrix, n, m) == 0) /* && la::isConsistEightInMatrix(matrix, n, m)*/)
	{
		la::sortStr(matrix, n, m);
		la::Write(matrix, n, m);

	}


	// �����
	

	return 0;
}