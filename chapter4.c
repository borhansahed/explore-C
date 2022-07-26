# include <stdio.h>

  int main(){

   int num;
  printf("enter your number(1-10)");
  scanf("%d", &num);

   
     int sum = 0;
// for(int i=1; i<=num; i++){
//    sum = sum + i;
// }
 int i = 1;
while (i<=num)
{
    sum = sum + i;
   i++;
}



for(int i=sum; i>=1; i--){
    printf("%d \n", i);
}

printf("Sum is %d" ,sum);
   
   

    return 0;
  }