#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void){
    int res,a,b;
    printf("ENter 2 Numbers:\n");
    scanf("%d%d",&a,&b);
    res=sum(a,b);
    printf("Result =%d",res);

    return EXIT_SUCCESS;
}

int sum(int num1,int num2){
    int result;
    result=num1+num2;
    return result;
}
