#include <stdio.h>
#include <stdlib.h>
void helper(int arr[],int s,int e){
    if(s == e){
        // this indicates that we have reached the point where we dont need to devide futher
    }
    helper(arr,s,(s+e)/2);
    helper(arr,(s+e)/2,e);
}
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
    helper(arr,s,n-1);
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}