#include<stdio.h>
#include<string.h>
int main()
{
    char cities[10][100];
    int i,l;
    {
        printf("enter a string");
        fgets(cities[i],sizeof(cities[i]),stdin);
        l=strlen(cities[i]);
        if(cities[i][l-1]=='\n',
            cities[i][l-1]=='\0');
    }
    for(i=0;i<=10;i++)
    {
        printf("%s\n",cities[i]);
    }
    return 0;
}