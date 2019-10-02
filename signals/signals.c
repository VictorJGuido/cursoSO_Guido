#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int infinito =1;

void  signalHandler(int signalNumber){
    printf("Signal received %d \n", signalNumber);
    infinito =0;
}

int main(){
    int pid;
    pid = fork();
    if(pid==0){
        printf("Soy el hijo\n");
        signal(10,signalHandler);
        while(infinito){
            printf("Estoy en el tornado");
            sleep(1);
        }
        printf("Ya sali");
        //for(;;);
    }else{
        sleep(1);
        printf("soy el padre\n");
        kill(pid,10);
        for(;;);
    }
}