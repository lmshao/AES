//
// Created by Liming Shao on 4/30/2018.
//

#include <stdio.h>
#include "Utils.h"

void printHex(const uint8_t *ptr, int len, char *tag) {
    printf("%s\ndata[%d]: ", tag, len);
    for (int i = 0; i < len; ++i) {
        printf("%.2X ", *ptr++);
    }
    printf("\n");
}

void printState(uint8_t (*state)[4], char *tag) {
    printf("%s\n", tag);
    for (int i = 0; i < 4; ++i) {
        printf("%.2X %.2X %.2X %.2X\n", state[i][0], state[i][1], state[i][2], state[i][3]);
    }
    printf("\n");
}
