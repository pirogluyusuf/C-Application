#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* MuhammetYusuf
Piroglu
17010011089*/ 
int main(int argc, char *argv[])
 {
 	//Tanimlar
 	float sayi1,sayi2,sonuc;
 	int n,islem,cikis;
 	hesap:
 		printf("\n\n");
 	//Hesap Makinesi
 	printf("\t\t\t\t\t\t HESAP MAKINESI\n");
 	printf("\t\t\t\t\t\t----------------\n");
 	printf("\t\t\t\t  Basit Hesap \t\t\t Gelismis Hesap\n");
 	printf("\t\t\t\t       |\t\t\t\t|\n");
 	printf("\t\t\t\t       V\t\t\t\tV\n");
 	printf("\t\t\t\t      [1]\t\t\t       [2]\n");
 	printf("Islem Seciniz:");
 	scanf("%d",&n);
 	
 	switch(n)
 	{
 		case 1: printf("Basit Hesap Secildi.\n\n");
 		break;
 		case 2: printf("Gelismis Hesap Secildi.\n\n");
	 }
	 if (n==1)
	 {
	 	printf("[1]Toplama\n");
	 	printf("[2]Cikarma\n");
	 	printf("[3]Carpma\n");
	 	printf("[4]Bolme \n\n");
	 	printf("Secilen Islem:");
	 	scanf("%d",&islem);
	 	printf("Birinci Sayiyi Giriniz.\n");
	 	printf("1.Sayi=");
	 	scanf("%f",&sayi1);
	 	printf("Ikinci Sayiyi Giriniz.\n");
	 	printf("2.Sayi=");
	 	scanf("%f",&sayi2);
	 	
	 	switch (islem)
	 	{
	 		case 1: sonuc=sayi1+sayi2;
	 		printf("\n\nSonuc=%f+%f'den=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 2: sonuc=sayi1-sayi2;
	 		printf("\n\nSonuc=%f-%f'den=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 3: sonuc=sayi1*sayi2;
	 		printf("\n\nSonuc=%f*%f'den=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 4: sonuc=sayi1/sayi2;
	 		printf("\n\nSonuc=%f/%f'den=%f",sayi1,sayi2,sonuc);
	 		break;
		 }
	 }
	 else if (n==2)
	 {
	    printf("[1]Toplama\n");
	 	printf("[2]Cikarma\n");
	 	printf("[3]Carpma\n");
	 	printf("[4]Bolme \n");
	 	printf("[5]Mod\n");
	 	printf("[6]Karekok\n");
	 	printf("[7]Ussu\n");
	 	printf("[8]Logaritma\n");
	 	printf("\n\nIslem Seciniz:");
	 	scanf("%d",&islem);
	 	
		 	
if (0<islem<9)
{

	 	switch(islem)
	 	{
	 		case 1: printf("\nBir sayi giriniz:");
		 	scanf("%f",&sayi1);
	 		printf("\nBir sayi giriniz:");
	 		scanf("%f",&sayi2);
			  sonuc=sayi1+sayi2;
	 		printf("\n%f+%f=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 2:printf("\nBir sayi giriniz:");
		 	scanf("%f",&sayi1);
	 		printf("\nBir sayi giriniz:");
	 		scanf("%f",&sayi2);
			  sonuc=sayi1-sayi2;
	 		printf("\n%f-%f=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 3:printf("\nBir sayi giriniz:");
		 	scanf("%f",&sayi1);
	 		printf("\nBir sayi giriniz:");
	 		scanf("%f",&sayi2);
			  sonuc=sayi1*sayi2;
	 		printf("\n%f*%f=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 4: printf("\nBir sayi giriniz:");
		 	scanf("%f",&sayi1);
	 		printf("\nBir sayi giriniz:");
	 		scanf("%f",&sayi2);
			 sonuc=sayi1/sayi2;
	 		printf("\n%f/%f=%f",sayi1,sayi2,sonuc);
	 		break;
	 		case 5: printf("\nBir sayi giriniz:");
		 	scanf("%f",&sayi1);
	 		printf("\nBir sayi giriniz:");
	 		scanf("%f",&sayi2);
			 sonuc=fmod(sayi1,sayi2);
	 		printf("\nSonuc=%f",sonuc);
	 		break;
	 		case 6: 	printf("\nKarekoku alinacak sayiyi giriniz:");
	 					scanf("%f",&sayi1);
	 				    sonuc=sqrt(sayi1);
	 					printf("sonuc=%f",sonuc);
	 					break;
	 					
	 		case 7: printf("taban sayisini giriniz:");
	 		scanf("%f",&sayi1);
	 		printf("Us giriniz:");
	 		scanf("%f",&sayi2);
			 sonuc=pow(sayi1,sayi2);
			 printf("%f ussu %f=%f",sayi1,sayi2,sonuc);
			 break;
	 		
	 		case 8: printf("Bir sayi giriniz:");
	 		scanf("%f",&sayi1);	 		
		    sonuc=log10(sayi1);
			printf("%f",sonuc);
			 break;
		}
 	 if(islem<0||islem>8)
			  	{
				printf("Yanlis Giris Yaptiniz!!!");
}
		 }

	 }
	 else 
	 {
	 	printf("Yanlis Giris Yaptiniz!!!");
	 }
	  printf("\n\nCikmak icin 0'a basiniz.");
	  scanf("%d",&cikis);
	  printf("\n\n");
	  if (cikis!=0)
		{
	   	 goto hesap;
	   }
	return 0;
}
