#include <stdio.h>
#include <stdlib.h>


void spiral(int *array, int n){
    int count = 1, left = 0, top = 0, right = n - 1, bottom = n - 1;
    
    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++){
            array[top * n + i] = count;
            count++;
        }
        top++;

        for (int i = top; i <= bottom; i++){
            array[i * n + right] = count;
            count++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--){
                array[bottom * n + i] = count;
                count++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--){
                array[i * n + left] = count;
                count++;
            }
            left++;
        }
    }
    
    for (int k = 0; k < n * n; k++){
        printf("%d\t", array[k]);
        if ((k + 1) % n == 0)
            printf("\n");
    }
}


int main(void) {
    int n, *array;
    scanf("%d", &n);
    array = (int *)malloc(n * n * sizeof(int));
    
    spiral(array,n);
    free(array);
    
    return 0;
}
