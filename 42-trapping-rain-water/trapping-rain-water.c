 #include <stdio.h>
#include <stdlib.h>

int trap(int* height, int heightSize) {
    if (heightSize == 0) return 0;

    int maxl[heightSize], maxr[heightSize], sum = 0;

    maxl[0] = height[0];
    for (int i = 1; i < heightSize; i++) {
        maxl[i] = (maxl[i-1] > height[i]) ? maxl[i-1] : height[i];
    }

    maxr[heightSize - 1] = height[heightSize - 1];
    for (int i = heightSize - 2; i >= 0; i--) {
        maxr[i] = (maxr[i+1] > height[i]) ? maxr[i+1] : height[i];
    }

    for (int i = 0; i < heightSize; i++) {
        sum += (maxl[i] < maxr[i] ? maxl[i] : maxr[i]) - height[i];
    }

    return sum;
}

