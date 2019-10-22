#include "types.h"
#include "stat.h"
# include "user.h"

int main(int argc, char **argv){
    int i;
    if(argc>=2){
        printf(1,"Time to sleep \n");
        i= atoi(argv[1])*100;
        sleep(i);
    }
    printf(1,"Time to wake up \n");
    exit();
}