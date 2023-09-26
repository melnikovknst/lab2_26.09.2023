#include <stdio.h>
#include <stdlib.h>


void sum(int *maxNum, int maxLen, int *minNum, int minLen){
    int ten = 0, maxEl, minEl, ind = 0;
    
    for (int i = 0; i < minLen; i++){
        maxEl = maxNum[maxLen - 1 - i];
        minEl = minNum[minLen - 1 - i];
        
        maxNum[maxLen - 1 - i] = (maxEl + minEl) % 10 + ten;
        ten = (maxEl + minNum[minLen - 1 - i]) / 10;
    }
    maxNum[0] += ten;
    
    if (maxNum[0] == 0)
        ind = 1;
        
    for (int i = ind; i < maxLen; i++)
        printf("%d", maxNum[i]);
    printf("\n");
}


int main(void){
    int *num1, *num2, len1, len2;
    scanf("%d %d", &len1, &len2);
    
    len1++;
    len2++;
    
    num1 = (int *)malloc(len1 * sizeof(int));
    num2 = (int *)malloc(len2 * sizeof(int));
    
    num1[0] = 0;
    num2[0] = 0;
    
    for (int i = 1; i < len1; i++)
        scanf("%d", &num1[i]);
    
    for (int i = 1; i < len2; i++)
        scanf("%d", &num2[i]);
    
    if (len1 > len2)
        sum(num1, len1, num2, len2);
    else
        sum(num2, len2, num1, len1);
    
    free(num1);
    free(num2);

    return 0;
}
