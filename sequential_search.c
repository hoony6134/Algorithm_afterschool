#include <stdio.h>
int main()
{
    int arr[10] = {2,6,9,50,73,102,999};
    int i,j;
    int ans;
    int find=0;
    int mid,low,high;
    printf("Enter the number to be searched: ");
    scanf("%d",&ans);
    low = 0;
    high = 6;
    for(i=low;i<=high;i++)
    {
        if(arr[i]==ans)
        {
            printf("The number is found at %dth position",i+1);
            find=1;
            break;
        }
    }
    if (find==0){
        printf("The number is not found");
    }
}