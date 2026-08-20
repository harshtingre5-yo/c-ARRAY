#include <stdio.h>

int main() {
    int marks[10],i,n,sum=0;
    float avg;

    printf("enter numbers of elements:");
    scanf("%d",&n);

    for(i=0;i<n;++i)
    {
        printf("enter number %d:",i+1);
        scanf("%d",&marks[i]);

        // adding integers entered by the user to the sum variable
        sum+=marks[i];
    }
    avg=sum/n;
    
    printf("avg=%.2f",avg);
    
    return 0;
}
