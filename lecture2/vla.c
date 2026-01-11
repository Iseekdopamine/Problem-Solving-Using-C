#include<stdio.h>
int main(){
	int n;
	printf("Enter size: ");
	scanf("%d", &n);
	int arr[n];
	//assigning the values
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	//print those values
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
	
