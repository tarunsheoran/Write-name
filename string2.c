#include<stdio.h>
 void printstr(char str[]){
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
 }

 int main()
 {
//char str[]={'T','a','r','u','n','\0'};

char str[35];
gets(str);
printstr(str);
return 0;
 }