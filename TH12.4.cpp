#include<stdio.h>
#include<conio.h>
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
   if(c==1)
   {
  	 writeFile("SinhVien.txt");
   }
   else if (c==2)
   {
     ReadFile("SinhVien.txt");
   }	
   else if (c==3)
   {
     search("SinhVien.txt");
   }
   elsee break;
 }
}

 void winteFile(char *FileName)
 { 
   FILE*f;
   int n,i;
   SinhVien sv;
   f=fopen(FileName,"ab");
   printf("nhap vao so luong sinh vien ");
   scantf("%d",&n);
   for(i=1;i<=n,i++)
   { 
    printf("sinh vien thu %i\n",i);
    fflush(stdin);
    printf(" - MSSV: ");
    gets(sv.Ma);
    printf(" - Ho ten: ");
    gets(sv.Hoten);
    fwrite(&sv,sizeof(sv),1,f);
} 
  fclose(f);
  printf("Bam phim bat ky de tiep tuc");
  getch();
}
  void ReadFile(char *FileName)
{ 
  FILE *f;
  SinhVien sv
   f=fopen(FileName,"rb");
   printf(" MSSV | Ho va ten\n");
   fread(&sv,sizeof(sv),1,7);
   while(!feof(f))
{ 
  printf(" %s | %s\n",sv,Ma,sv.HoTen);
  fread(&sv,sizeof(sv),1,7);
}
  fclose(f);
  printf("Bam phim bat ky de tiep tuc!!!");
  getch();
}

  void Seach(char *FileName)
{ 
  char MSSV[10];
  FILE*f;
  int Found=0;
  SinhVien sv;
  fflush(stdin);
  printf("Ma so sinh vien can tim: ");
  gets(MSSV);
  f=fopen(FileName,"rb");
     while(!feof(f) && Foud==0)
{ 
  fread(&sv,sizeof(sv),1,7);
  if ( strcmp(sv,Ma,MSSV))==0
    Foud=1;
}
  fclose(f);
 if (Foud==1)
 { 
   printf("tim thay sv co ma %s. Ho ten la: %s ",sv,Ma,sv.HoTen);
 }
 else 
 {
   printf("tim khong thay sinh vien co ma %s",MSSV);
 }
 printf("\nBam phim bat ky de tiep tuc!!!")  ;
 getch();
 
}





































