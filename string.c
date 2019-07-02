#include<stdio.h>

int max = 1000;

int stringLength(char* s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
	
	}
	
	return i;
}

int stringCompare(char* s1,char* s2)
{
	int i,j;
	for(i=0,j=0;i<stringLength(s1) && j<stringLength(s2);i++,j++)
	{
		if(s1[i]!=s2[j]) return 0;
		
		if(i!=j) return 0;
	}
	
	return 1;
}

char* stringConcat(char* s1,char* s2)
{
	int i,j,count = 0;
	char s3[max];
	for(i=0;i < stringLength(s1); i++)
	{
		s3[count] = s1[i];
		count++;
	}
	
	for(j=0;j < stringLength(s2); j++)
	{
		s3[count] = s2[j];
		count++;
	}
	
	return s3;
}

char* stringReverse(char* s)
{
	int i,j;
	char s1[max];
	
	for(i=0,j=stringLength(s)-1;i<stringLength(s) && j>=0;i++,j--)
	{
		s1[i] = s[j];
	}
	
	return s1;
}

int pelindrome(char* s)
{
	if(stringCompare(s,stringReverse(s))==1) return 1;
	
	else return 0;
}

int main(void)
{
	char s1[max];
	char s2[max];
	
	int choice;
	
	printf("What do you want to do?\n1.Length\n2.Compare\n3.Concatanate\n4.Reverse\n5.Pelindrome\n6.Quit\n");
	
	scanf("%d",&choice);
	
	while(1)
	{
		if(choice==1)
		{
			printf("Enter a string: ");
			scanf("%s",s1);
			printf("%d\n",stringLength(s1));
		}

		else if(choice==2)
		{
			printf("Enter two strings: ");
			scanf("%s %s",s1,s2);
			printf("%d\n",stringCompare(s1,s2));
		}

		else if(choice==3)
		{
			printf("Enter two strings: ");
			scanf("%s %s",s1,s2);
			printf("%s\n",stringConcat(s1,s2));
		}

		else if(choice==4)
		{
			printf("Enter a string: ");
			scanf("%s",s1);
			printf("%s\n",stringReverse(s1));
		}
		
		else if(choice==5)
		{
			printf("Enter a string: ");
			scanf("%s",s1);
			printf("%d\n",pelindrome(s1));
		}
		
		else if(choice==6)
		{
			break;
		}
		
		printf("What do you want to do?\n1.Length\n2.Compare\n3.Concatanate\n4.Reverse\n5.Pelindrome\n6.Quit\n");
		
		scanf("%d",&choice);

	}
	
	return 0;
}
