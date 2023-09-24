#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int isIn(int newNumb, int *array, int len){
    int flag = 0;
    for (int i = 0; i < len; i++){
        if (newNumb == array[i])
            flag = 1;
    }

    return flag;
}


void filling(int *array, int len){
    srand(time(NULL));
    int newNumb;
    printf("[");
    for (int i = 0; i < len; i++){
        newNumb = rand();

        while (isIn(newNumb, array, i))
            newNumb = rand();
        array[i] = newNumb;
        
        printf("%d ", array[i]);
    }
    printf("]\n");
}


int main(void){
    int *array, len;
    scanf("%d", &len);
    array = (int *)malloc(len * sizeof(int));

    filling(array, len);
    free(array);

    return 0;
}
