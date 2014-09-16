#include <stdio.h>                                  
#include <conio.h>

main()
{
	float celcius;
   float fahrenheit;
   float reamur;
   celcius=0;
	printf("Program konversi suhu sederhana C ke F dan R bahasa C oleh Nur Prasetyo""\n""\n""Masukkan suhu derajat celcius : ");
   scanf("%f",&celcius);
   fahrenheit=celcius*1.8+32;
   reamur=celcius*0.8;
   printf("\n");
   printf("jadi %2.2f derajat Celcius sama dengan : ""\n""\n""- %2.2f derajat Fahrenheit""\n""- %2.2f derajat Reamur",celcius,fahrenheit,reamur);
   printf("\n""\n""Terima Kasih, Tekan sembarang untuk keluar");
	getch();
	return 0;
}

