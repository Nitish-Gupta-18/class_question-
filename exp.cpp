#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

// Function to compute GCD
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Function to count special divisors of N
int countSpecialDivisors(ll N) {
    vector<ll> divisors;
    
    // Find all divisors of N safely
    ll sqrtN = sqrt(N); // Compute sqrt(N) once to avoid repeated calculations
    for (ll i = 1; i <= sqrtN; i++) { 
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N / i) { // To avoid adding the same divisor twice
                divisors.push_back(N / i);
            }
        }
    }

    int specialCount = 0;
    
    // Check for special divisors
    for (ll d : divisors) {
        ll nd = N / d;
        if (gcd(d, nd) == 1) {
            specialCount++;
        }
    }

    return specialCount;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        ll N;
        cin >> N;
        cout << countSpecialDivisors(N) << endl;
    }

    return 0;
}