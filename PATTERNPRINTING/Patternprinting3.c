/*print the given pattern
****
****
****
**** */
#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows and columns : ");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
    }
    return 0;

}

