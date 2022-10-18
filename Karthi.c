#include<stdio.h>

#include <stdlib.h>

#include<string.h>

#include<ctype.h>

int isKeyword(char *ch)

{

char keywords[32][10] = {"auto","break","case","char","const","continue","default",

 "do","double","else","enum","extern","float","for","goto",

 "if","int","long","register","return","short","signed",

   "sizeof","static","struct","switch","typedef","union",

 "unsigned","void","volatile","while"};

  for(int i=0;i<32;i++)

  {

  if(!strcmp(keywords[i],ch))

  return 1;

  }

return 0;

}

int isOperator(char *ch)

{

char operators[][2] ={"+","-","*","/","%","++","--","=","+=","-=","==",">","<",">=","<=","!=","&&","||","!"};

for(int i=0;i<sizeof(operators);i++)

{

if(!strcmp(operators[i],ch))

return 1;

}

return 0;

}

int isConstant(char *ch)

{

int flag = 0;

for(int i=0;i<strlen(ch);i++)

{

if(isdigit(ch[i]))

{

flag++;

}

}

if(flag==strlen(ch))

return 1;

else if((ch[0]== '"' && ch[sizeof(ch)-1] == '"'))

return 1;

else

return 0;

}

int isIdentifier(char *ch)

{

if(isalpha(ch[0]) || ch[0] == '_')

return 1;

else 

return 0;

}

void main()

{

int k=0,o=0,c=0,d=0;

char keywords[100][10],operators[100][2],constants[100][20],identifiers[100][20];

FILE *fp;

fp = fopen("test.c","r");

if(fp==NULL){

printf("error opening file");

exit(0);

}

char buffer[100];

while(fscanf(fp,"%s",buffer) == 1)

{

//printf("Buffer : %c\n",buffer[0]);

if(isKeyword(buffer))

strcpy(keywords[k++],buffer);

else if(isOperator(buffer))

strcpy(operators[o++],buffer);

else if(isConstant(buffer))

strcpy(constants[c++],buffer);

else if(isIdentifier(buffer))

strcpy(identifiers[d++],buffer);

}

printf("Keywords : ");

for(int i=0;i<k;i++)

printf("%s ",keywords[i]);

printf("\nOperators : ");

for(int i=0;i<o;i++)

printf("%s ",operators[i]);

printf("\nConstants : ");

for(int i=0;i<c;i++)

printf("%s ",constants[i]);

printf("\nIdentifier : ");

for(int i=0;i<d;i++)

printf("%s ",identifiers[i]);

}
