#include<stdio.h>
#include<string.h>
int main()
{
    char words[10][100];
    int i,l;
    {
        printf("enter a string");
        fgets(words[i],sizeof(words[i]),stdin);
        l=strlen(words[i]);
        if(words[i][l-1]=='\n',
            words[i][l-1]=='\0');
    }
    for(i=0;i<=10;i++)
    {
        printf("%s\n",words[i]);
    }
    return 0;
}