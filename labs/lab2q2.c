#include<stdio.h>
int main(){
	char x;
	scanf(" %c",&x);
	if(x>=65 && x<=90){
		printf("Valid Password Character, Size: %zu byte\n", sizeof(x));

}
	else{
		printf("Invalid Password Character, Size: %zu byte\n", sizeof(x));


	}
	return 0; 
}
