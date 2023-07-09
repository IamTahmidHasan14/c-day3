#include<stdio.h>
int main()
{
    int i, f=1, num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        f=f*i;
    }
    printf("factorial=%d",f);

    return 0;
}
