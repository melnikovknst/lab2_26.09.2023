#include <stdio.h>


int sum(int num){
    if (num == 0)
        return 0;
        
    return num % 10 + sum(num / 10);
}


int main(void){
    int num;
    scanf("%d", &num);
    printf("%d\n", sum(num));
    
    return 0;
}
