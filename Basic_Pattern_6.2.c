#include <stdio.h>

int main()
{
    int n,k=1;
    scanf("%d",&n);
    
    for (int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j<i) 
                printf(" ");
            else printf("%d ",i);
        }
        printf("
");
    }
}