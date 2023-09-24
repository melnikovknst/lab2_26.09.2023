#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void isSqr(int num, int *count) {
    if(sqrt(num) == ceil(sqrt(num)))
        *count += 1;
}


int main(void) {
    int n, count = 0, *array;  //n -lenght of array
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        isSqr(array[i], &count);
    }
    free(array);
    
    printf("%d\n", count);
    return 0;
}
