#include<stdio.h>
#include<string.h>
main()
{
   FILE *a;
   int i;
   char s[100];
   a=fopen("name.doc","w+");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
      fputc(s[i],a);
   }
   fclose(a);
}
