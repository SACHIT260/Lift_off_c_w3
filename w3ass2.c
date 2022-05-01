#include<stdio.h>
int prime(int x, int y){
    if(y==1){
        return 1;
    }
    else{
        if(x %y==0){
            return 0;
        }
        else{
            return prime(x,y-1);
        }
    }
}
int main(){
    int a,b;
    printf("Enter number\n");
    scanf("%d",& a);
    b=prime(a,a/2);
    if(b==1){
        printf("%d is a prime number\n",a);
    }
    else{
        printf("%d is not a prime number\n",a);

    }
    return 0;

}