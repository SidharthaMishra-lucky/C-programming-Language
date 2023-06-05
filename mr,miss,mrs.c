#include<stdio.h>
 int main()
{
    char name[40],gender,marital_status;
    printf("Enter your name.. "); scanf(" %c",&name);
    printf("Enter your gender (M/F): "); scanf("%c",&gender);
    printf("Enter marital status (M/U)"); scanf("%c",&marital_status);
      if(gender=='m' && marital_status=='M/U')
      {
      	printf("Mr. %c.\n",name);
	  }
      else if(gender=='f'&& marital_status=='U')
       {
       	 printf("Miss. %c ",name);
	   }
      else
        {
        	printf(" Mrs. %c \n",name);
		}
     
    return 0;   
}
