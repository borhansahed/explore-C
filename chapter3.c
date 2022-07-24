#include <stdio.h>

  int main(){
 
    int number;

    printf("enter your number");
    scanf("%d", &number);

    // if(number >= 1 && number <= 9 ){

    //     printf("Natural Number \n");

    // }
    // else{
    //     printf("Not a Natural Number \n");
    // }

   if(number >= 100){
    printf("Armstrong Number");
   }
   else{
    printf("Not a Armstrong Number");
   }


    return 0;
  }