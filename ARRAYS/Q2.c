//Write a program to reverse an array or string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
