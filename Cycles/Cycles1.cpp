#include <iostream>
#include <cmath>

int main()
{
    const int nMax = 1000;
    int mass[nMax];
    int n;
    int mult = 1;
    int index = 1;
    int j = -1000000;
    int new_index = 0;

    std::cout << "Enter sequence length: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << " number: ";
        std::cin >> mass[i];
    }

    for (int i = 0; i <= n; i++) {

        if (mass[i] % 10 == 2 || mass[i] % 10 == -2) {
            mult *= mass[i];
            if (mass[i] > j) { j = mass[i]; new_index = index; }
        }
        index++;
    }
    std::cout << "Multiplication: " << mult << "\n";
    std::cout << "Max int: " << j << "\n";
    std::cout << "Max int index: " << new_index << "\n";
}

