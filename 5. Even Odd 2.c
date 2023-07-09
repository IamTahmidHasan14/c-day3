#include<stdio.h>
int main()
{
    int i, num, j=0, k=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        if(i%2==0){
        printf("%20d is Even.\n",i);
        j++;
        }
    else{
        printf("%10d is Odd.\n",i);
        k++;
        }
    }
        printf("Total Even Number=%d\nTotal Odd Number=%d", j, k);

    return 0;
}
