#include<stdio.h>
int main(){
	int x,y,z ;
	printf("Enter status of the signal controller:");
	scanf("%d",&x);
	printf("Enter the vehicle count:");
	scanf("%d",&y);
	printf("Input 0 if there is no system fault otherwise mention the number of faults:");
	scanf("%d",&z);
	if(x==1 && y<=50 && z==0) printf("Signal turned green");
	else if (x==0 && z==0) printf("Controller inactive");
	else if(y>50) printf("Traffic overflow");
	else if(z>0) printf("Sysem fault detected");
	else printf("Unknown error");
	return 0;
}

	
