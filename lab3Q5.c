#include <stdio.h>

int main() {
int row, col;
printf("Enter the number of rows:");
scanf("%d",&row);
printf("Enter the number of columns:");
scanf("%d",&col);
int matrix1[row][col];
int matrix2[row][col];
int result [row][col];
    
printf("Enter elements for the first matrix:\n");
for (int i=0; i<row; i++){
for (int j=0; j<col; j++) {
printf("Enter element for matrix1[%d][%d]:",i,j);
scanf("%d",&matrix1[i][j]);
}

}
printf("Enter elements for the second matrix: \n");
for (int i=0 ; i<row; i++){
for(int j=0;j<col;j++){
printf("Enter element for matrix 2[%d][%d]:",i,j);
scanf("%d", &matrix2[i][j]); } };

for (int i=0 ; i<row; i++) {
for (int j=0; j < col; j++) {
    result [i][j] = matrix1[i][j]+matrix2[i][j];}} }

printf("Resultant matrix after addition:\n");
 for (int i=0; i<row; i++) {
for (int j=0; j<col; j++) {
printf (%d, result[i][j]; }
printf("\n");
}
return 0;
}
