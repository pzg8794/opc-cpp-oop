//
//  test.cpp
//  extracreditFCT
//
//  Created by Piter Garcia on 7/29/13.
//  Copyright (c) 2013 Piter Garcia. All rights reserved.
//

#include "test.h"



/* Add two numbers in a GF(2^8) finite field */
uint8_t gadd(uint8_t a, uint8_t b) {
    return a ^ b;
}

/* Subtract two numbers in a GF(2^8) finite field */
uint8_t gsub(uint8_t a, uint8_t b) {
    return a ^ b;
}

/* Multiply two numbers in the GF(2^8) finite field defined
 * by the polynomial x^8 + x^4 + x^3 + x + 1 */
uint8_t gmul(uint8_t a, uint8_t b) {
    uint8_t p = 0;
    uint8_t counter;
    uint8_t carry;
    for (counter = 0; counter < 8; counter++) {
        if (b & 1)
            p ^= a;
        carry = (a & 0x80);
        a <<= 1;
        if (carry)
            a ^= 0x011D; /* what x^8 is modulo x^8 + x^4 + x^3 + x^2 + 1 */
        b >>= 1;
    }
    return p;
}