#include <stdio.h>

main()
{
    char a[100];
    int i;

    printf("Enter your text : ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if(i==0){
            	if(a[i]>='a' && a[i]<='z')
				{
						
            		a[i] = a[i] - 32;
				}
            	
			}
			else{
				
				if(a[i]>='A' && a[i]<='Z'){
            		
            		a[i] = a[i] + 32;
				}
				
			}
        }
    }

    printf("Titalcase string : %s",a);
    
}
