# include <stdio.h>
# include <string.h>
 
 int arrayLength (char name []);
 void slice (char arr [], int n, int m);

 int main(){
  char arr[] = {"HelloWorld"};
  char newName[100] = "sahed ";
  char oldName[] = "Mohammad";
//   fgets(name , 100, stdin);
 slice(arr,3,5);
 strcat(newName,oldName);

  puts(arr);
//   printf(" %d", length);

    return 0;
 }

void slice (char arr[], int n, int m){
  char newArr[100];
 int j =0;
  for(int i =n;i<=m; i++ , j++){
     newArr[j] = arr[i];

  }
  newArr[j]= '\0';
  puts(newArr);

}



 int arrayLength (char arr []){

    int count = 0;
    for(int i =0; arr[i] != '\0'; i++){

        
            count++;
           
        
       

    }
    return count -1;
 }