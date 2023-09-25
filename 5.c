include <stdio.h>
#include <stdlib.h>
#include <math.h>

float length(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


float square(int *coordinates, int vertexes){
    float s = 0, a, b, c, p; // a, b, c - sides of a triangle
    
    for (int i = 2; i < vertexes * 2 - 2; i+=2){
        a = length(coordinates[0], coordinates[1], coordinates[i], coordinates[i + 1]);
        b = length(coordinates[i], coordinates[i + 1], coordinates[i + 2], coordinates[i + 3]);
        c = length(coordinates[0], coordinates[1],  coordinates[i + 2], coordinates[i + 3]);
        p = (a + b + c)/2;
        s += sqrt(p*(p - a)*(p - b)*(p - c));
    }
    
    return s;
}


int main(void){
    int *coordinates, vertexes;
    scanf("%d", &vertexes);
    coordinates = (int *)malloc(vertexes * sizeof(int));

    for (int i = 0; i < vertexes * 2; i++)
        scanf("%d", &coordinates[i]);
    
    printf("%f\n", square(coordinates, vertexes));
    return 0;
}
