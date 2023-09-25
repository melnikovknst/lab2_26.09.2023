#include <stdio.h>
#include <stdlib.h>


int max(num1, num2){
    if (num1 > num2)
        return num1;
    return num2;
}


int maxElement(int *array, int last){
    int maxEl = array[last];
    
    if (last == 0)
        return array[0];
    
    array[last - 1] = max(array[last - 1], array[last]);
    
    return maxElement(array, last - 1);
}


int main(void){
    int len, *array;
    scanf("%d", &len);
    array = (int *)malloc(len * sizeof(int));
    
    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);
    
    printf("%d\n", maxElement(array, len - 1));
    free(array);
    
    return 0;
}
