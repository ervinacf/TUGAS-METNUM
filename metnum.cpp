#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main(){
int a=0;
int b=0;
float c=0;
float d=0;
int hasil=0;
int pilih;
do{
clrscr();
printf("menu hitung \n");
printf("1. Pertambahan \n");
printf("2. Pengurangan \n");
printf("3. Perkalian \n");
printf("4. Perpangkatan \n");
printf("5. Fungsi \n");
printf("6. Exit \n");
printf("masukkan pilihan anda:"); scanf("%d",&pilih);
if(pilih==1){
printf("masukkan a= "); scanf("%d",&a);
printf("masukkan b= "); scanf("%d",&b);
hasil=a+b;
printf("hasil a+b= %d",hasil);
getch();
}

else if(pilih==2){
printf("masukkan a= "); scanf("%d",&a);
printf("masukkan b= "); scanf("%d",&b);
hasil=a-b;
printf("hasil a-b= %d",hasil);
getch();
}
else if(pilih==3){
printf("masukkan a= "); scanf("%d",&a);
printf("masukkan b= "); scanf("%d",&b);
hasil=a*b;
printf("hasil a*b= %d",hasil);
getch();
}
else if(pilih==4){
printf("masukkan a= "); scanf("%d",&a);
printf("masukkan b= "); scanf("%d",&b);
hasil=pow(a,b);
printf("hasil : %d ^ %d = %d", a, b , hasil);
getch();
}
else if(pilih==5){
int A, B, hasil;
printf("masukkan a= "); scanf("%d",&A);
printf("masukkan b= "); scanf("%d",&B);
for (a=A;a<=B;a++){
	hasil = (3*(a*a))+(a-1);
printf("hasil = %d",hasil); }
getch();
}
//pilih++;     
}
while(pilih<=7);
printf("program keluar");
getch();
return 1;
}