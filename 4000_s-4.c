#include <stdio.h>

main()
{
    char a[100];
    int i;

    printf("Enter your text : ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i] = a[i] - 32;
        }
    }

    printf("Uppercase string : %s",a);
    
}
