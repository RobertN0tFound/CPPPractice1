﻿#include <stdio.h>

int main()
{
    char t[20];
    int x;
    char t1[2];
    char f[20];
    int y;
    char f1[2];
    char h[20];
    int z;
    char h1[2];
    scanf_s("%s%d%s", t, 20, &x, t1, 2);
    scanf_s("%s%d%s", f, 20, &y, f1, 2);
    scanf_s("%s%d%s", h, 20, &z, h1, 2);
    printf("|------------------------------------------------------------|");
    printf("\n|Characterisctic PEVM                                        |");
    printf("\n|------------------------------------------------------------|");
    printf("\n|Core                |Frequency (Mgz)     |RAM (Mb)    |Type |");
    printf("\n|--------------------|--------------------|------------|-----|");
    printf("\n|%-20s|%-20d|            |%-5s|", t, x, t1);
    printf("\n|--------------------|--------------------|------------|-----|");
    printf("\n|%-20s|%-20d|            |%-5s|", f, y, f1);
    printf("\n|--------------------|--------------------|------------|-----|");
    printf("\n|%-20s|%-20d|            |%-5s|", h, z, h1);
    printf("\n|------------------------------------------------------------|");
    printf("\n|Type: C - CISC-core, R - RISC-core                          |");
    printf("\n|____________________________________________________________|");
}

