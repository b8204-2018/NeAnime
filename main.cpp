#include <iostream>
#include <stdio.h>
#include "Header.h"
#include <cmath>

using namespace std;

int main() {
        int x, y;
        printf("Type X\n");
        scanf("%d", &x);
        printf("Type Y\n");
        scanf("%d", &y);
        printf("Your score:\n");
        printf("%d\n", Darts(x,y));
        return 0;
}