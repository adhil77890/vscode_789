#include<stdio.h>
int main(){
    int array[10] =  {10,20,30,40,50 }, i, length,value,position;
    length = 5;
    printf("enter position want to insert");
    scanf("%d", &position);
    printf("enter value want to insert");
    scanf("%d", &value);
   
    for (i = length; i > position--){
        array[1] = array[i - 1];
    }   
    array[position - 1] = value;
    length = length + 1;
    printf("array after insertion\n");
    for (i =0,i < length;i++) {
        print("%d\t",array[i]);  
}  
return 0;   