#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end);
bool isPrime(int n);
int getNextPrime(int begin);
int getPrevPrime(int end);

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) {
    int candidate = begin + 1;
    while (!isPrime(candidate)) {
        candidate++; 
    }
    return candidate;
}

int getPrevPrime(int end) {
    int candidate = end - 1;
    while (candidate > 1 && !isPrime(candidate)) {
        candidate--;
    }
    return candidate;
}