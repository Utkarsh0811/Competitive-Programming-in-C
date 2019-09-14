#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,count=0;
    printf("enter a string\n");
    scanf("%s",&a);
    printf("%s",a);
    printf("\nLength is %d\n",strlen(a));
  //  char b[strlen(a)-1];

    for(i=0;i<strlen(a);i++)
    {
       b[strlen(a)-(i+1)]=a[i];
     }

      for(i=0;i<strlen(a);i++)
    {
    if(b[i]==a[i]){
       count++;

    }else{
    printf("No");
     break;
    }
    }
    if(count==strlen(a)){
        printf("Yes");
    }
    return 0;

}
