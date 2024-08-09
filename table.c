#include<stdio.h>
int main(){
    int i,n,j,num;
    printf("enter number of table:");
    scanf("%d",&num);
    printf("multiplication of table %d  ",  num);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i, num*i);

    }
    
    return 0;
    

}