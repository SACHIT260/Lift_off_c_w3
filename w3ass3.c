#include<stdio.h>
int check(int a){
    if(a%2==0){
        printf("%d is an even number\n",a);
    }
    else{
        printf("%d is an odd number\n",a);

    }
}
int main(){
int n;
printf("Enter number\n");
scanf("%d",&n);
check(n);
return 0;
}
