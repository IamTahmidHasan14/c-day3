#include<stdio.h>
int main()
{
    int num, p=0, n=0;
    for(;;){
    scanf("%d",&num);
    if(num>0){
        p++;
        }
    else if(num<0){
        n++;
        }
        else{
            break;
        }
    }
        printf("Positive Numbers= %d\nNegative Numbers= %d", p, n);

    return 0;
}
