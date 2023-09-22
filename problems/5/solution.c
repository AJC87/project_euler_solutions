#include <stdio.h>

int main(void) {
    int start = 20;
    int i;
    int count = 0;
    int iterations = 0;
    
    // 14 - 7, 16 - 8, 18 - 9
    
    for (i = start; ; i += 20) {
        if ((i % 19 != 0) || (i % 17 != 0) || (i % 13 != 0) || (i % 11 != 0) || (i % 18 != 0) || (i % 16 != 0) || (i % 14 != 0)) {
            continue;
        }

        break;
    }
    
    printf("Answer is: %d\n", i);

    return 0;
}