#include<stdio.h>
 int main()
 { // Program to count vowels,consonants,digits and spaces in given string.
    char a[100];
    int i,vowel=0,cons=0,digits=0,space=0;
    printf("enter a string\n");
    gets(a);

    for(i=0;i<strlen(a);i++)
    {
      if('a'<=a[i] || 'A'<=a[i] )
       {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            vowel=vowel+1;
        else
            cons=cons+1;
       }
      else if('0'<=a[i] && a[i]<='9' )
        digits=digits+1;
      else if(a[i]==' ')
        space=space+1;
    }
    printf("vowel=%d\n",vowel);
    printf("digits=%d\n",digits);
    printf("cons=%d\n",cons);
    printf("space=%d\n",space);
    return 0;
 }
