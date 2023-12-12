
#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num > 1000000000) {
        return 0;
    }

    int maxCount = 0; // максимальное кол-во встречающихся цифр
    int mostCommonDigit = 0; // самая часто встречающаяся цифра

    for (int i = 0; i < 10; i++) {
        int count = 0; // счетчик для текущей цифры
        int tempNumber = num; // временная переменная

        while (tempNumber != 0) {
            int digit = tempNumber % 10;
            if (digit == i) {
                count++;
            }
            tempNumber /= 10;
        }

        if (count > maxCount) {
            maxCount = count;
            mostCommonDigit = i;
        }
    }

    std::cout << "The most common number: " << mostCommonDigit << '\n';

    return 0;
}

