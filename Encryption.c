#include<stdio.h>
#include<string.h>
int main()
{
    char ara[100];
    int len,i,k,k1,key;
    printf("Enter your message: ");
    scanf("%s",ara);
    len=strlen(ara);
    printf("Enter your key:");
    scanf("%d",&key);

    for(i=0;i<len;i++){
            if(ara[i]>='a'&& ara[i]<='z')
            {
                k=ara[i]-96;
                k1=(k+key)%26;
                ara[i]=96+k1;
            }
            else if(ara[i]>='A'&& ara[i]<='Z')
            {
                k=ara[i]-64;
                k1=(k+key)%26;
                ara[i]=64+k1;
            }

    }
    printf("%s",ara);


}
