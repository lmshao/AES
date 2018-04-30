//
// Created by Liming Shao on 2018/4/24.
//

#include <stdio.h>
#include "AES.h"
#include "Utils.h"

int main() {

    const uint8_t key[16] = {0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
    const uint8_t pt[16]={0x32, 0x43, 0xf6, 0xa8, 0x88, 0x5a, 0x30, 0x8d, 0x31, 0x31, 0x98, 0xa2, 0xe0, 0x37, 0x07, 0x34};
    uint8_t ct[16] = {0};
    aesEncrypt(key, 16, pt, ct, 16);
    printf("expect: 39 25 84 1D 02 DC 09 FB DC 11 85 97 19 6A 0B 32\n");
    printHex(ct, 16, "cipher data:");

    const uint8_t key1[]="1234567890123456";
    const uint8_t *data = (uint8_t*)"abcdefghijklmnop";
    aesEncrypt(key1, 16, data, ct, 16);
    printf("\nexpect: fcad715bd73b5cb0488f840f3bad7889\n");
    printHex(ct, 16, "cipher data:");

    return 0;
}