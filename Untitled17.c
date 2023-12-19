#include <stdio.h>

int main (void)
{
 int no1, no2;
 int process;
 int comm;
 
 
printf("enter first number: ");
scanf("%d", &no1);

printf("enter second number: ");
scanf("%d", &no2);

printf(" sum :1\n sub:2\n multiply:3\n dvide:4\n");
scanf("%d", &comm);

if (comm==1){

	process=no1+no2;
	printf("sum is %d", process);
	}
else if (comm==2){

	process=no1-no2;
	printf("sub is %d", process);
	}
else if (comm==3){
	process=no1*no2;
	printf("multiply is %d", process);
	}

else if (comm==4){


	process=no1/no2;
	printf("divide is %d", process);
	}
else
	return 0;
}
