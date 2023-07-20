#include <stdio.h>
int main(){
	int a, sum=0, count = 0;
	while(1){
	printf("enter a number :\n");
	if (a<=0){
	break;
	}
	scanf("%d",&a);
	sum += a;
	count++;
}
	printf("summation = %d\n", sum);
	printf("avr = %d\n" ,count);
	return 0;
}
