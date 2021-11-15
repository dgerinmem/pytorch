#include <stdio.h>

int main() {
    printf("STARTING DPU\n");

    int sum = 0;
    for (int i = 0; i < 1000000; i++) {
        sum += i;
        if (i % 100000 == 0) printf("DPU exec stage ... %d\n", i / 100000 + 1);
    }
    
    printf("DPU DONE\n");
    return 0;
}