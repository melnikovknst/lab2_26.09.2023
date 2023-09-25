#include <stdio.h>
#include <stdlib.h>


int maxElement(int *array, int last){
    int maxEl = array[last], *currentEl = &array[last - 1];

    if (last == 0)
        return array[0];

    if (maxEl > *currentEl)
        *currentEl = maxEl;

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
