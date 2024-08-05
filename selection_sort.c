#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter The Lenght of The array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        int mini = arr[i];int mini_index = i;
        for(int j = i+1;j<n;j++){
            if(mini>arr[j]){
                mini_index = j;
                mini = arr[j];
            }
        }
        int c = arr[i];
        arr[i] = mini;
        arr[mini_index] = c;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}