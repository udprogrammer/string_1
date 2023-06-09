#include<stdio.h>

main()
{
	char a[100]= {"RED & WHITE MULTINATION COMPANY"};  
    int i;
 
     
    for(i=0;a[i];i++)  
    {
    	 if(a[i]>=65 && a[i]<=90)
         a[i]= a[i] +32;
 	}
 	printf("String in lowercase = ");
 	puts(a);    
	
}
