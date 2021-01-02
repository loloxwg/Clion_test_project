#define N 100

#include<cmath>
#include<iostream>

using namespace std;

void SiftPrime(int a[], int n);

int IsPrime(int x);


int main() {
    int i;
    for (i = 1; i <= N; i++) {
        if (IsPrime(i)) {
            cout << i << " ";
        }

    }
    return 0;
}

int IsPrime(int x) {
    int i, squareRoot;
    if (x <= 1) {
        return 0;
    }
    squareRoot = (int) sqrt(x);
    for (i = 2; i <= squareRoot; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
//    return 0;
}