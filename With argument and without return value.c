#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main(void){
    int a,b;
    printf("ENter 2 Numbers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);

    return EXIT_SUCCESS;
}

void sum(int num1,int num2){
    int result;
    result=num1+num2;

    printf("Result is:\n%d",result);

}
