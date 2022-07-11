//Maximum and minimum of an array using minimum number of comparisons

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {10,2,3,12,5,7,4,8,9,11};
    int min=100000,max=0;        //min value should be the maximum and max value should be minimum
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d\t%d",min,max);
}
