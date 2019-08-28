#include <stdio.h>
<<<<<<< HEAD

int main(){
    printf("HOLLAAAAA MUNDOOO \n Adios");
=======
#include "./libhello.h"

int main(int argc, char **argv){
    int i = 0;
    for(i=1; i<argc; i++){
        printHello(argv[i]);
    }
>>>>>>> 42a01d023606d12c97d3e36cb0c5517cf28957ad
    return 0;
}