#include<stdio.h>

int main()
{
    int a;
    printf("Enter value : ");
    scanf("%d",&a);
    if(a%2 == 0){
    printf("This number is even");
    }
    else
    {
    printf("This number is odd");
    }
    return 0;
}