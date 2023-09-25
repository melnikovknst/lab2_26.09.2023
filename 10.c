#include <stdio.h>
#include <stdlib.h>


int isSymmetric(int *array, int i, int j){
    if (j - i == 1 || i == j)
        return 1;
    if (array[i] == array[j])
        return isSymmetric(array, i + 1, j - 1);
    return 0;
}


int main(void){
    int len, *array, i, j;
    scanf("%d %d %d", &len, &i, &j);
    array = (int *)malloc(len * sizeof(int));
    
    for (int k = 0; k < len; k++)
        scanf("%d", &array[k]);
    
    if (isSymmetric(array, i, j))
        printf("Symmetric\n");
    else
        printf("Not symmetric\n");
    free(array);
  
    return 0;
}
