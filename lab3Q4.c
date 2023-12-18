#include <stdio.h>

int main(){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr);
int target;
printf("Enter the element to search: ");
scanf("%d", &target);
int * ptr = arr;
int found = 0;

for (int i=0; i<n; i++) {
if (*ptr == target) {
found = 1;
break; }
ptr ++; }
  
if (found){
printf("%d is found in the array \n",target);
} else { printf ("%d is not found in the array \n", target);
}
return 0;
}
