#include <iostream>

bool isPrime(int number)
{
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    const int nMax = 10000;
    int numbers[nMax];
    int k;
    bool flag = false;
    int input;
    //int numbers[5]{ 4, 6, 27, 17, 92 };
    std::cout << "Enter mass size: ";
    std::cin >> input;
    for (int i = 0; i < input; i++) {
        std::cout << "Element 0: ";
        std::cin >> numbers[i];
    }
    

    for (int n : numbers) {
        if (isPrime(n)) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (numbers[i] >= numbers[j]) {
                    k = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = k;
                }
            }
        }
    }

    for (int n : numbers) {
        if (n == -858993460) {
            break;
        }
        std::cout << n << '\n';
    }

    return 0;
}



