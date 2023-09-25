#include <stdio.h>
#include <stdlib.h>


void del(int *array, int **len, int ind){
    for (int p = ind; p < **len - 1; p++)
        array[p] = array[p + 1];
    **len = **len-1;
    array = (int *)realloc(array, **len * sizeof(int));  //resize the memory for array
}


void various(int *array,int *len){
    for (int i = 0; i < *len - 1; i ++){
        for (int c = i + 1; c < *len; c++){
            if (array[i] == array[c]){
                del(array, &len, c);
                c--;
            }
        }
    }
}


int main(void){
    int len, *array;
    scanf("%d", &len);
    array = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);

    various(array, &len);

    printf("[");
    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
    printf("]\n");
    
    free(array);

    return 0;
}
