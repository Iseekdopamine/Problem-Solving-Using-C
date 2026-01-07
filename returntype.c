#include <stdio.h>
int main(){
int x;
int p = printf("Hello World\n");
printf("Return value of printf = %d\n",p);
printf("Enter a number: ");
int s = scanf("%d", &x);
printf("Return value of scanf = %d\n",s);
return 0;
}
