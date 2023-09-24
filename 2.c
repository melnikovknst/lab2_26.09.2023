#include <stdio.h>
#include <stdlib.h>


int evklid(int a, int b){
    while (a != 0 && b != 0){
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    
    return a + b;
}


void greatestDivisor(int n, int *array){
    int answer = array[0];

    for(int i = 0; i < n; i++)
        answer = evklid(answer, array[i]);
    
    printf("%d\n",answer);
}


int main(void){
    int n, *array;
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    greatestDivisor(n, array);
    free(array);
    
    return 0;
}
