#include <stdio.h>
#include <stdlib.h>


void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}

void sum(){
    int sum,num1,num2;
    printf("Enter The 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("The Total is:\n");
}
