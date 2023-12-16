#include <iostream>
#include <vector>
using namespace std;

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
    setlocale(LC_ALL, "rus");

    vector<int> numbers;
    cout << "Введите число(0 для остановки):" << endl;
    int input;
    do {
        cin >> input;
        numbers.push_back(input);
    } while (input != 0);

    int k;
    bool flag = false;



    for (int n : numbers) {
        if (isPrime(n)) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        for (int i = 0; i < numbers.size()-1; i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] >= numbers[j]) {
                    k = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = k;
                }
            }
        }
    }
    //numbers.shrink_to_fit();

    for (int n : numbers) {
        cout << n << '\n';
    }

    cout << '\n';
    cout << numbers.size() << '\n';
    cout << numbers.capacity();

    return 0;
}
