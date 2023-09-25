include <stdio.h>


int sum(int num){
    if (num == 0)
        return 0;
        
    return num % 10 + sum(num / 10);
}


int digSqrt(int num){
    if (num / 10 == 0)
        return num;
    return digSqrt(sum(num));
}


int main(void){
    int num;
    scanf("%d", &num);
    printf("%d\n", digSqrt(num));
    
    return 0;
}
