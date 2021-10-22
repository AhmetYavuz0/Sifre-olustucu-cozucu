#include <stdio.h>
#include <stdlib.h>

int main (){
int i,f,t,harf,kk=1;char istek;double harf1=0;
int sifre[2][2]={76,47,19,21};double toplam=0;
double cozucu[2][2]={0.0298719772403982930298719772404,-0.06685633001422475106685633001422,-0.02702702702702702702702702702703,0.10810810810810810810810810810811};
printf("1.SIFRE OLUSTUR\n2.SIFRE COZ\n");
istek=getch();
switch (istek){
	case '1' :	system("cls");
				printf("Sifre olusturmak istediginiz cumle kac karakterden olusuyor => ");
				scanf("%d",&harf);
				harf1=harf;
				if(harf1/2>harf/2){
				printf("Cumlenin sonuna nokta koyunuz\n\nDevam etmek icin bir tusa basiniz...");
				getch();
				harf++;
				int sonuc[2][harf/2];
				char giris[2][harf/2],girdi;
				system("cls");
				for (i=0;i<2;i++)
				{
					for (f=0;f<harf/2;f++)
					{
						printf("%d.harfi giriniz => ",kk);
						kk++;
						girdi=getch();
						giris[i][f]=girdi;
						printf("%c",girdi);
						printf("\n");
					}
				}
				for(i=0;i<2;i++)
				{
					for(f=0;f<harf/2;f++)
					{
						for(t=0;t<2;t++)
						{
							toplam+=sifre[i][t]*giris[t][f];
						}
						sonuc[i][f]=toplam;
						toplam=0;
					}
				}
				system("cls");
				printf("Sifreniz basariyla olusturuldu\n\n");
				for(i=0;i<2;i++)
				{
					for(f=0;f<harf/2;f++)
					{
						printf("%d\t",sonuc[i][f]);
					}
					printf("\n");
				}}
				else if (harf1/2==harf/2)
				{
					int sonuc[2][harf/2];
				char giris[2][harf/2],girdi;
				system("cls");
				for (i=0;i<2;i++)
				{
					for (f=0;f<harf/2;f++)
					{
						printf("%d.harfi giriniz => ",kk);
						kk++;
						girdi=getch();
						giris[i][f]=girdi;
						printf("%c",girdi);
						printf("\n");
					}
				}
				for(i=0;i<2;i++)
				{
					for(f=0;f<harf/2;f++)
					{
						for(t=0;t<2;t++)
						{
							toplam+=sifre[i][t]*giris[t][f];
						}
						sonuc[i][f]=toplam;
						toplam=0;
					}
				}
				system("cls");
				printf("Sifreniz basariyla olusturuldu\n\n");
				for(i=0;i<2;i++)
				{
					for(f=0;f<harf/2;f++)
					{
						printf("%d\t",sonuc[i][f]);
					}
					printf("\n");
				}
				}break;
				
	case '2' :	system("cls");
				int sutun,mm=1;
				printf("Sifreniz kac adet sayidan olusuyor => ");
				scanf("%d",&sutun);
				int gereken[2][sutun/2],sonuc1[2][sutun/2];
				system("cls");
				for(i=0;i<2;i++)
				{
					for(f=0;f<sutun/2;f++)
					{
						printf("%d.sayiyi giriniz => ",mm);
						scanf("%d",&gereken[i][f]);
						mm++;
					}
				}
				for(i=0;i<2;i++)
				{
					for(f=0;f<sutun/2;f++)
					{
						for(t=0;t<2;t++)
						{
							toplam+=cozucu[i][t]*gereken[t][f];
						}
						sonuc1[i][f]=toplam+0.4;
						toplam=0;
					}
				}
				system("cls");
				printf("Sifre basariyla cozuldu...\n\n");
				for (i=0;i<2;i++)
				{
					for(f=0;f<sutun/2;f++)
					{
						printf("%c ",sonuc1[i][f]);
					}
			
				}break;

}
getch();
}

