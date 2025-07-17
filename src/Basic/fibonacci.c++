// This program prints the nth Fibonacci number using recursion and can also print the Fibonacci sequence up to n.
#include <iostream>
using namespace std;

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

int main() {
    cout << "Enter a positive integer" << endl;
    int num;
    cin >> num;
    cout << "Fibonacci of " << num << " is: " << fibonacci(num) << endl;
    return 0;
}