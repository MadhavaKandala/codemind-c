#include<stdio.h>
#include<string.h>

int main(){
    char str1[108],str2[108];
    scanf("%s %s",str1,str2);
    strcat(str1,str2);
    int n = strlen(str1);
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(str1[j]>=str1[j+1]){
                char temp = str1[j];
                str1[j] = str1[j+1];
                str1[j+1] = temp;
            }
        }
    }
    puts(str1);
}