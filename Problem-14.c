#include <stdio.h>
 #include <string.h>
  int main(){
  	char Str1[100], Str2[100];
  	int result, i;

  	gets(Str1);

  	gets(Str2);
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
  	if(Str1[i] < Str2[i])
   	{
   		printf("str1 is less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("str2 is less than str1");
	}
	else
   	{
   		printf("str1 is equal to str2");
	}
  	return 0;
}
