#include<stdio.h>
int main()
{
    int i, n, a, sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(n=n; n>0; n/=10){
        a=n%10;
        sum+=a;
    }
        printf("Sum of Digits= %d", sum);

    return 0;
}
