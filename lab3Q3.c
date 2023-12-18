#include <stdio.h>

int main(){

int num;
printf("Enter the size of the array:");
scanf("%d", & num);
int arr [num];
int *ptr = arr;
printf("\n Enter %d elements:", num);
for (int i=0; i<num; i++) {
    printf("\n Enter element %d:", i+1);
    scanf("%d", ptr+i); }

printf("\n Elements in the array are: \n");
for (int i=0; i<num ; i++) {
printf("%d",*(ptr+i));
}
printf("\n");
return 0;
}
