#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][100],ch[5]={'a','e','i','o','u'};
    int count=0;
    printf("enter a string");
    for(int i=0;i<5;i++)
    fgets(str[i],sizeof(str[i]),stdin);
    for(int i=0;i<5;i++)
    {
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]==ch[5])
            {
                count++;
            }
        }
    }
    printf("count %d",count);
    return 0;
}

