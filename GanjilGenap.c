#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if(x % 2 == 0){
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }   
    return 0;
}
