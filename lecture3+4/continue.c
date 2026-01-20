#include<stdio.h>
int main(){
    for(int i=0;i<=5;i++){
        if(i==2){
            printf("Skipping iteration %d\n",i);
            continue;
        }
        printf("Executing iteration %d\n", i);
    }
    return 0;
}
