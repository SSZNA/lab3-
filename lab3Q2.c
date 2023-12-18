#include <stdio.h>
#include <string.h>

int main(){
char string [100];
printf("Enter a string:");
scanf("%s",&string);
char *ptr = string + strlen(string)-1;
printf("Reversed string:");
while ( ptr >= string) {
printf("%c",*ptr);
ptr--;}
printf("\n");
return 0; }
