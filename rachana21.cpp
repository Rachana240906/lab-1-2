#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the values of a,b");
   scanf("%d%d",&a,&b);
   char operation;
   printf("enter the function");
   scanf("%c",operation);
   switch(operation)
   {
     case '+':printf("the value is %d",a+b);
     break;
     case '-":printf("the value is %d",a-b);
     break;
     case '*':printf("the value is %d",a*b);
     break;
     case "%':printf("the value is %d",a%b);
     break;
     case '/':printf("the value is %d",a/b);
     break;
  }
}#include<stdio.h>
#include<stdio.h>
int main(){
	char a;
	printf("enter character");
	scanf("%c", &a);
	printf("the ASCII value of character is %d",a);
	if(a>=48&&a<=57){
		printf("character is digit");
	}
	else if(a>=65&&a<=90){
		printf("character is capital case letter");}

	else if(a>=97&&a<=122){
		printf("character is small case letter");

	}

	else{printf("character is symbol");

	return 0;
}
}#include<stdio.h>
int main(){
	char a;
	printf("enter character");
	scanf("%c", &a);
	printf("the ASCII value of character is %d",a);
	if(a>=48&&a<=57){
		printf("character is digit");
	}
	else if(a>=65&&a<=90){
		printf("character is capital case letter");}

	else if(a>=97&&a<=122){
		printf("character is small case letter");

	}

	else{printf("character is symbol");

	return 0;
}
}
