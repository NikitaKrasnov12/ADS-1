// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool check = true;
    uint64_t i;
    for (i = 2; i <= (value / 2); i++) {
        if (value % i == 0) {
            check = false;
            break;
        }
    }
    return check;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 0;
    uint64_t i;
    while(true) {
        if (checkPrime(i)) {
            count += 1;
            if (count == n) {
                return count;
            }
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    uint64_t i;
    while(true) {
        if (checkPrime(i)) {
            return i;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t count = 0;
    uint64_t i;
    for (i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            count += i;
        }
    }
    return count;
}
