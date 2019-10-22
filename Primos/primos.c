#include <stdio.h>
#include <stdlib.h>

int main(){
    int current;
    int cuCurrent;
    scanf("%d", &current);
    fprintf(stderr, "%d, ", current);
    scanf("%d", &cuCurrent);
    while (cuCurrent != -1) {
        if (cuCurrent%current != 0) {
            printf("%d\n", cuCurrent);
        }
        scanf("%d", &cuCurrent);
    }
    printf("%d\n", -1);
    return 0;
}