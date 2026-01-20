#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==6) break;
        printf("%d",i);
    }
    printf("Loop exited.\n");
    return 0;
}
    
