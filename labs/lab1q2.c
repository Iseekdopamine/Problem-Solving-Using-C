#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter the compile status(0 or 1):");
	scanf("%d",&x);
	printf("Enter the order quantity:");
	scanf("%d",&y);
	printf("Enter the debug mode status:(0 or 1):");
	scanf("%d",&z);
	if(x==1 && y>0 && z==0) printf("Order processed sucessfully");
	else if(x!=1) printf("Compilation Error!");
	else if(y<=0) printf("Invalid order quantity");
	else if(z!=0) printf("Disable debug mode");
	else printf("Unknown error");
	return 0;
}
