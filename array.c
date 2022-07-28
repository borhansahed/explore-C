#include <stdio.h>
 
 int oddNumber (int arr[], int size);
 void reverse (int arr[] ,  int n);
 int printF (int arr[], int n);

 int main(){
    // array
  // int _arr[] = {3,4};
int arr[] = {1,2,3,4,5,6};

int size = 6;

 reverse(arr, size);
 printF(arr,size);





int counterOdd = oddNumber(arr, size);

printf("total oddNumber is %d \n", counterOdd);
  // // 2D array
  // int arr[3][2] = {{5,53}, {3,55},{3,49}};

  // printf("%d", arr[2][1]);


  return 0;
 }

int printF (int arr[], int n){
  for(int i =0; i<n; i++){
      printf("%d", arr[i]);

  }
  printf("\n");
}


//reverse elements in array
void reverse (int arr[], int n){

  for(int i =0; i<n/2; i++){

   int  firstElement = arr[i];
   int secondElement = arr[n-i-1];
    arr[i] = secondElement;
    arr[n-i-1] = firstElement;
  }
}


//find odd numbers in array;
 int oddNumber(int arr[] , int size){
  
    int count = 0; 

   for(int i = 0; i<size; i++){

    if(arr[i] % 2 != 0){
 
     count++;

    }
   
   }
   
 return count;

 }