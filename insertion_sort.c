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

    // main logic
    // in insertion sort basicaly we will pick a element start comapring it with previous element and swap if needed
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                int c = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = c;
            }
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}