#include <stdio.h>
#include <math.h>


int isPrime(int num, int dum){
    if (num % dum == 0 && num != 2)
        return 0;
    if (dum < (int)sqrt(num))
        return isPrime(num, dum += 1);

    return 1;
}


int main(void){
    int num, dum = 2;
    scanf("%d", &num);

    if (isPrime(num, dum))
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}

//#include <stdio.h>
//#include <math.h>
//
//
//void isPrime(int num){
//    if (num == 2 || num == 3 || (int)(pow(num, 2)-1) % 24 == 0)
//        printf("Prime\n");
//    else
//        printf("Not prime\n");
//}
//
//
//int main(void){
//    int num;
//    scanf("%d", &num);
//    isPrime(num);
//
//    return 0;
//}
