#include <iostream>

int multy(int k) {
    int mult = 1;
    while (k) {
        mult *= (k % 10);
        k /= 10;
    }
    return mult;
}

int main()
{
    const int nMax = 1000;
    int mass[nMax];
    int n;

    std::cin >> n;
    for (int i=0; i < n; i++) {
        std::cin >> mass[i];
    }
    // Сортировка

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int first_i = mass[i];
            while (first_i > 9) {
                first_i /= 10;
            }
            int first_j = mass[j];
            while (first_j > 9) {
                first_j /= 10;
            }

            if (multy(mass[i]) > multy(mass[j]) ||
                multy(mass[i]) == multy(mass[j]) && first_i > first_j ||
                multy(mass[i]) == multy(mass[j]) && first_i == first_j && mass[i] > mass[j]) {
                int tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
        }
        
    }
    // Вывод
    for (int i = 0; i < n; i++) {
        std::cout << "Mass" << i << ": " << mass[i] << '\n';
    }
}

