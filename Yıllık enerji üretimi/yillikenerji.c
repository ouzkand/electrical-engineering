#include<stdio.h>
#include<conio.h>

int main(void){
	float dusu,e,q,v,md=0.85,mt=0.75,mg=0.95,port,g=9.81;
	
	printf("Su hacmini (m3/day) giriniz: "); 
	scanf("%f",&v);
	printf("Nominal dusuyu giriniz: "); 
	scanf("%f",&dusu);
	q=(float) v/(24*3600);
	port=(float)g*dusu*q*md*mt*mg;
	e=port*365*24/1000;
	printf("\nBir yilda uretilen enerji: %.2f Mwh",e);
}