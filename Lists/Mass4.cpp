#include <iostream>

int mult(int x) {
    int cnt = 1;
    while (x) {
        cnt *= (x % 10);
        x /= 10;
    }
    return cnt;
}

bool same(int x) {
    int d;
    int lastDigit = x % 10;
    while (x) {
        d = x % 10;
        x /= 10;
    }
    if (d  == 1 && lastDigit == 1) {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int k = 0;
    const int nMax = 10000;
    int numbers[nMax];
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter number " << i << " (not zero): ";
        std::cin >> numbers[i];
    }
    int newlist[sizeof(numbers)/sizeof(numbers[0])];
    for (int i = 0; i < n; i++) {
        if (mult(numbers[i]) != 180) {
            newlist[k] = numbers[i];
            k++; 
        }

    }

    for (int i = 0; i < n; i++) {
        if (same(newlist[i])) {
            std::cout << newlist[i] << " "; 
        }                                                 
    }                                                                        
    std::cout << '\n';

}

