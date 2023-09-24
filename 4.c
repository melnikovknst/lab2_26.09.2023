#include <stdio.h>
#include <stdlib.h>


int max(int num1, int num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}


void oddCounter(int *array, int len){
    int count = 0, answer = 0;
    
    for (int i = 0; i < len; i++){
        if (array[i] % 2 == 1)
            count ++;
        else{
            answer = max(answer, count);
            count = 0;
        }
    }
    
    printf("%d\n", max(answer, count));
}


int main(void){
    int *array, len, count;
    scanf("%d", &len);
    array = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);
    
    oddCounter(array, len);
    free(array);
    
    return 0;
}
