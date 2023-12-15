#include<stdio.h>
#include <stdlib.h>


int main()
{ 
FILE * fp;
   char filename[67], ch;
   printf(" FILENAME: ");
   gets (filename);
   if (( fp= fopen(filename,"w")) == NULL )
  { 
  printf ( " create file error \n");
   exit (1);
  }
  printf(" nhap van ban ghi vao tep : \n ");
  
while (( ch = getchar()) != '\n' ) 
{
       putc(ch, fp);
}
fclose (fp);



   printf(" ghi vao tep thanh cong \n ");
  
   
if (( fp= fopen(filename,"r")) == NULL )
  { 
  printf ( " ofen file error \n");
   exit (1);
  }
  printf("noi dung cua tep la: \n");
  
while (( ch = getc(fp)) != EOF )
   printf ("%c",ch);
   
fclose (fp);
return 0;
}



