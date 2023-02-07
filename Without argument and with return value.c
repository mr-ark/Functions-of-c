#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void){
      int res;
      res=sum();
      printf("Result is %d", res);

     return EXIT_SUCCESS;
}

int sum(){
     int num1,num2,result;
     printf("Enter 2 numbers");
     scanf("%d%d", &num1,&num2);
     result=num1+num2;
     return result;
}
