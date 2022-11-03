#include<stdio.h>
#include<conio.h>

int main(void){
	int hacim=750000000;
	float dusu,e,q,md=0.85,mt,mg=0.95,port,g=9.81;
	printf("Nominal dusu yuksekligini giriniz: "); scanf("%f",&dusu);
	q=(float) 750000000/(8760*3600);

	if(dusu>=300) {
		mt=0.912;}
	else if(300>dusu && dusu>=34) {
		mt=0.94;}
	else if(34>dusu && dusu>1) {
		mt=0.883;}
	else {
		printf("\nLutfen giris parametrelerini dogru giriniz!");}
		
	port=(float) g * dusu * q * md * mt * mg;
	e=(float) (port * 8760)/1000;
	if(e>0) printf("\nBir yilda uretilen enerji: %.2f Mwh",e);
	
}