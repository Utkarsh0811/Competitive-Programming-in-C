#include<stdio.h>

int main()
{   // program to print alphabets from A to Z
    char ch;
    int a;
    // Method-1
    for(ch='A';ch<='Z';ch++)
    {
        printf("%c",ch);
    }
    printf("\n");
    // Method-2
    for(a=65;a<=90;a++)
      printf("%c",a);
}
