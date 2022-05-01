#include<stdio.h>
int swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping:a=%d b=%d",x,y);
    return 0;
}
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:a= %d,b=%d",a,b);
    swap(a,b);
    return 0;
}