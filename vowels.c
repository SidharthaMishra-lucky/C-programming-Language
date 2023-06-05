#include<stdio.h>
int main()
{
char ch;
printf("\n enter any character:");
scanf("%c",&ch);
switch(ch)
{
	case'A':
	case'a':
		    printf("\n %c is vowel",ch);
		    break;
	case'E':
	case'e':
	        printf("\n %c is vowel",ch);
			break;
	case'I':
	case'i':
	        printf("\n %c is vowel",ch);
	case'O':
	case'o':
	        printf("\n %c is vowel",ch);
	case'U':
	case'u':
	        printf("\n %c is vowel",ch);
			break;
	default:
	       printf("\n %c is consonant",ch);
}
return 0;
}

