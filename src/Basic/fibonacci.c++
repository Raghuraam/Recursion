// This program prints the nth Fibonacci number using recursion with memoization and can also print the Fibonacci sequence up to n.
#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci_memoize_table;

void init() {
    fibonacci_memoize_table.resize(100);
    fibonacci_memoize_table[0] = 0;
    fibonacci_memoize_table[1] = 1;
}

void print_fibonacci_recursive(int n, int n1, int n2) {
    if (n2 > n) {
        return;
    }
    cout << n1 + n2 << endl;
    print_fibonacci_recursive(n, n2, n1 + n2);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_memoize(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (fibonacci_memoize_table[n] != 0) {
        return fibonacci_memoize_table[n];
    }
    fibonacci_memoize_table[n] = fibonacci_memoize(n - 1) + fibonacci_memoize(n - 2);
    return fibonacci_memoize_table[n];
}

int main() {
    init();
    cout << "Enter a positive integer" << endl;
    int num;
    cin >> num;
    cout << "Fibonacci of " << num << " is: " << fibonacci_memoize(num) << endl;
    return 0;
}