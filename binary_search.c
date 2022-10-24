#include <stdio.h>
int main()
{
    int arr[10] = {2,6,9,50,73,102,999};
    int i,j;
    int ans;
    int mid,low,high;
    int find=0;
    printf("Enter the number to be searched: ");
    scanf("%d",&ans);
    low = 0;
    high = 6;
    mid = (low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==ans)
        {
            printf("The number is found at %dth position",mid+1);
            find=1;
            break;
        }
        else if(arr[mid]<ans)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
        mid = (low+high)/2;
    }
    if (find==0){
        printf("The number is not found");
    }
}