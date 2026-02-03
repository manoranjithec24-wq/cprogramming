// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int number =10;
    int * point= &number;
    int **secodpoint =&point;
    
    printf("%d \n",number); //to show thi value of var
    
    printf("%d \n",point); //to show thi value of pointer
    printf("%d \n",*point); //to show thi value of pointer
    
    printf("%d \n",secondpoint);//to show thi value of pointer
    printf("%d \n",**secondpoint);//to show thi value of pointer
    
    return 0;
}