#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool is_prime(long n) {
    if (n < 2) return false;  // 0 and 1 are not prime numbers
    for (long i = 2; i <= sqrt(n); ++i) {  // check up to sqrt(n)
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int in;
    cin >> in;

    vector<long long> primes;
    vector<long long> super_primes;

    long i = 2;

    // Generate the first 10000 prime numbers
    while (primes.size() < 5000) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
        i++;
    }

    // Generate super primes (primes at prime indices)
    for (int i = 0; i < 5000; i++) {
        if (is_prime(i+1)) {  // `i+1` is to adjust index to 1-based
            super_primes.push_back(primes[i]);
        }
    }

    cout << super_primes[in-1];  // Output the super prime at the specified index
}
