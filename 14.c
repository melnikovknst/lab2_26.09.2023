#include <stdio.h>
#include <stdlib.h>


void spiral(int **array, int n){
    int count = 1;

    for(int sqr = 0; sqr < n / 2; sqr++){

        for(int i = sqr; i < n - sqr; i++){
            array[sqr][i] = count;
            count++;
        }
        
        for(int i = sqr + 1; i < n - sqr; i++){
            array[i][n - sqr - 1] = count;
            count++;
        }

        for(int i = n- sqr - 2; i >= sqr; i--){
            array[n - sqr -1][i] = count;
            count++;
        }

        for (int i = n - sqr - 2; i > sqr; i--){
            array[i][sqr] = count;
            count++;
        }
    }
    
    if (n % 2 == 1)
        array[n / 2][n / 2] = count;

    for (int i = 0; i < n;i++){
        for (int k = 0; k < n; k++)
            printf("%d\t", array[i][k]);
        printf("\n");
    }

}


int main(void){
    int n, **array;
    scanf("%d", &n);
    array = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
        array[i] = (int *)malloc(n * sizeof(int));

    spiral(array, n);
    free(array);
    
    return 0 ;
}
