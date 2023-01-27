#include<stdio.h> 
void check(char s)
{
	printf("\n %c",s+" is" );
	switch(s)
{
case'>': if(s=='=')
printf("\t Greater than or equal"); else
printf("\t Greater than"); break;
case'<': if(s=='=')
printf("\t Less than or equal"); else
printf("\tLess than"); break;
case'=': if(s=='=') printf("\tEqual to");
else printf("\tAssignment"); break; case'!': if(s=='=')
printf("\tNot Equal"); else
printf("\t Bit Not"); break;
case'&': if(s=='&')
printf("\tLogical AND"); else
printf("\t Bitwise AND"); break;
case'|': if(s=='|') printf("\tLogical OR"); else
printf("\tBitwise OR"); break;
case'+': printf("\t Addition"); break;
case'-': printf("\tSubstraction"); break;
case'*': printf("\tMultiplication"); break;
case'/':	printf("\tDivision");
break;
case'%': printf("\tModulus"); break;
default: printf("\t Not a operator");
}
}
void main()
{
char s[100];
int i=0;
printf("\n Enter the expression=:");
gets(s);
while(s[i]!='\0')
{
if( isdigit(s[i]) || isalpha(s[i]))
i++;
else
{
check(s[i]);
i++;
}
}

}
