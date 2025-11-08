#include<stdio.h>
int IsSquare(int n){
    if(n<0){
        return 0;
    }
    int i=1;
    while(n>0){
        n-=i;/*n循环遍历减1*/
        i+=2;/*i循环遍历加2*/
    }
    return n==0?1:0;/*如果n最后等于0则是完全平方数*/
}
int main(){
    int num;
    printf("Enter a integer:\n");/*integer:整数*/
    scanf("%d",&num);
     
}