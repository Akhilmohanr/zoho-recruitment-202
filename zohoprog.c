#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int length,mid,k=0;
    char str[100],temp[100];
    printf("Enter the String: ");
    scanf("%s",&str);
    length=strlen(str);
    mid=length/2;
    for(int i=mid;i< length;i++)
    {
        temp[k++]=str[i];
    }
    for(int i=0;i< length;i++)
    {
        temp[k++]=str[i];
    }
    for(int i=0;i<strlen(str);i++)
    {
        k=0;
        for(int j=0;j<strlen(str);j++)
        {
            if(j<length-1)
            printf(" ");
            if(j>=length-1)
            printf("%c",temp[k++]);
        }
        length--;
        printf("\n");
    
    }
}