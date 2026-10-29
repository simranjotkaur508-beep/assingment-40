#include<stdio.h>
#include<string.h>
int main()
{
    char cities[4][10];
    int i,j,l;
    {
        fgets(cities[i],10,stdin);
        l=strlen(cities);
        if(cities[i][l-1]=='\n',
        cities[i][l-1]='\0');
        
    }
    for(i=0;i<=3;i++)
    {
        printf("%s\n",cities[i]);
    }

    return 0;
}