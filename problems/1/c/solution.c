#include <stdio.h>

int main(void) {
    // no point starting below 3
    int start = 3;
    // we could use the real last valid number but no big deal
    int finish = 1000;
    int sum = 0;

    // can improve this by starting at 3 and 5 and adding 3 or 5 respectively
    for (int i = start; i < finish; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) sum += i;
    }

    printf("Answer is: %d\n", sum);

    return 0;
}
