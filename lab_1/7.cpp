#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
    int i;
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
    return 0;
}

int main() {
    int in;
    cin >> in;

    if(prime(in)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
