#include<stdio.h>
int main(){
	int employee_id;
	float basic_salary;
	char bonus_char;
	scanf("%d %f %c",&employee_id, &basic_salary,&bonus_char);
	int bonus_percent=bonus_char-'0';//for conversion of char to int 
	float final_salary= basic_salary+(basic_salary*bonus_percent/100);
	printf("Final Salary: %.2f\n",final_salary);
	return 0;
}
	
