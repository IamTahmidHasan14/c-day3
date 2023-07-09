#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        if(i%2==0)
        printf("%d is Even.\n",i);
    else
        printf("%d is Odd.\n",i);
        }
    return 0;
}
