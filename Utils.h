//
// Created by Liming Shao on 4/30/2018.
//

#ifndef AES_UTILS_H
#define AES_UTILS_H

#include <stdint.h>

void printHex(const uint8_t *ptr, int len, char *tag);

void printState(uint8_t state[4][4], char *tag);

#endif //AES_UTILS_H
