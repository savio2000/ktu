#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{

  char s[100];
  printf("enter the string\n");
  gets(s);
  printf("%s\n",s );
  char F='1';
  for (int i = 0; s[i] != '\0'; ++i)
  {
  	 switch(F)
  	 {
  	 	case '1':if (s[i]=='a')
  	 	 {
  	 	 	F='2';
  	 	 }
  	 	 else if (s[i]=='b')
  	 	 {
  	 	 	F='1';
  	 	 }
  	 	 break;
  	 	 case '2':if (s[i]=='a')
  	 	 {
  	 	 	F='2';
  	 	 }
  	 	 else if (s[i]=='b')
  	 	 {
  	 	 	F='3';
  	 	 }
  	 	 break;
  	 	 case '3':if (s[i]=='a')
  	 	 {
  	 	 	F='4';
  	 	 }
  	 	 else if (s[i]=='b')
  	 	 {
  	 	 	F='1';
  	 	 }
  	 	 break;
  	 	 case '4':if (s[i]=='a')
  	 	 {
  	 	 	F='2';
  	 	 }
  	 	 else if (s[i]=='b')
  	 	 {
  	 	 	F='5';
  	 	 }
  	 	 break;
  	 	 case '5':if (s[i]=='a')
  	 	 {
  	 	 	F='5';
  	 	 }
  	 	 else if (s[i]=='b')
  	 	 {
  	 	 	F='5';
  	 	 }
  	 	 break;



  	 }


  	/* code */
  }
 
printf("%c",F);

 if (F=='5')
 {
 	printf("SUCCES");
 }
 else
 {
 	printf("NOt ok");
 }
	return 0;
}
