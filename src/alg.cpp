// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool check = true;
    for (int i = 2; i <= (value / 2); i++) {
        if (value % i == 0) {
            check = false;
            break;
        }
        else {
            check = true;
        }
    }
    return check;
}

uint64_t nPrime(uint64_t n) {
    int count = 0;
    for (int i = 2; i < 1000; i++) {
        if (checkPrime(i)) {
            count += 1;
            if (n == i) {
                return count;
            }
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    for (int i = value + 1; i <= 1000; i++) {
        if (checkPrime(i)) {
            return i;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    int count = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            count += i;
        }
    }
    return count;
}
