#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int i;
    for(i = 2; i < 101; i++){
        printf("%d\n", i);
    }
    printf("%d\n", -1);
    return 0;
}