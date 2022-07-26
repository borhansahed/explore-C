# include<stdio.h>
void  ageAddress (int a);
 int main (){

    int age = 22;
    int *ptr = &age;
    printf("%p \n" , &age);

    ageAddress(age);
    // // how to print address 
    // printf("%p", &age);

    // address has given hexaCode. thats why we used to %u for understand address code as number
   // printf("%u", &age);

   // print  value
   // print("%d" , *ptr);
   // we used %d because value is integer. * is contain value thats why we used * before ptr;
    // printf("value is %d \n",age );
    return 0;
 }
// call by value is copy of main value . thats why main value address and call by value address are not same;
// but call by reference value address and main value address are same;
 void ageAddress (int a) {

    printf("%p \n", &a);
 }