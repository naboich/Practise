#include<stdio.h>
int main(){
    int ans = 4,n;
    scanf("%d",&n);
    if(n>ans){
        printf("large\n");
    }
    if (n<ans)
    {
        printf("small\n");
    }
    if (n==ans)
    {
        printf("bingo");
    }   
    return 0;
}