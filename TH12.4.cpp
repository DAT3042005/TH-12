#include<stdio.h>
#include<conio.k>
#include<string.h>

typedef struct
{ 
  char Ma[10];
  char HoTen[40];
} SinhVien;

void ReadFile(char *FileName);
void WriteFile(char *FileName);
void Search(char *FileName);

int main()
{ 
  int c;
  for(;;)
 {  
   printf("\n \t*-*_*_*_*_*_*_*_*_*_*\n");
   printf("\t 1. Nhap DSSV\n");
   printf("\t 2. In DSSV\n");
   printf("\t 3.Tim Kiem\n");
   printf("\t 4. Ban chon 1,2,3,4: ");
   scanf("%d",&c);
   fflush(stdin);
   if(==1)
   {
  	 writeFile("SinhVien.txt");
   }
   else if (==2)
   {
     ReadFile("SinhVien.txt");
   }	
   else if (==3)
   {
     search("SinhVien.txt");
   }
   elsee break;
 }
}


















































