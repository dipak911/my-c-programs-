#include<stdio.h>

int main(){
   
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("values of array are:");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    printf("\n");
    return 0;
}