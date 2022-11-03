
#include <stdio.h>
#include <conio.h>
int main()
{
	printf("lutfen asagida verilen renk kodlarina gore giriniz\n\n  siyah....0  kahverengi...1\n  kirmizi..2  turuncu......3");
	printf("\n  sari.....4  yesil........5\n  mavi.....6  mor..........7\n  gri......8  beyaz........9\n  altin...10  gumus.......11");
	float ohm=0,bant,renk,sicak,i,carpan=1,sicaklik,tolerans=0;
	printf("\n\nDirencteki bant sayisini giriniz: "); scanf("%f",&bant);   
	if(bant==4){
    	printf("1. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk*10;
    	printf("2. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk;
    	printf("3. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	for(i=0;i<renk;i++){carpan*=10;}
    	if(renk==10) carpan=0.1;
    	if(renk==11) carpan=0.01;
    	ohm*=carpan;
    	printf("4. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	if(renk==5) renk=0.5;
    	if(renk==6) renk=0.25;
    	if(renk==7) renk=0.1;
    	if(renk==8) renk=0.05;
    	if(renk==9) renk=1;
    	if(renk==10) renk=5;
    	if(renk==11) renk=10;
    	tolerans=ohm*renk/100;
    	if(ohm>=1000){
    		printf("\n%.2fk ohm -+ %%%.2f",ohm/1000,renk);
    		printf("\nTolerans araligi: %.2fk ohm - %.2fk ohm",(ohm-tolerans)/1000,(ohm+tolerans)/1000);
		}else{
			printf("\n%.2f ohm -+ %%%.2f",ohm,renk);
    		printf("\nTolerans araligi: %.2f ohm - %.2f ohm",(ohm-tolerans),(ohm+tolerans));
		}	
	}
	if(bant==5){
    	printf("1. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk*100;
    	printf("2. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk*10;
    	printf("3. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk;
    	printf("4. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	for(i=0;i<renk;i++){carpan*=10;}
    	if(renk==10) carpan=0.1;
    	if(renk==11) carpan=0.01;
    	ohm*=carpan;
    	printf("5. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	if(renk==5) renk=0.5;
    	if(renk==6) renk=0.25;
    	if(renk==7) renk=0.1;
    	if(renk==8) renk=0.05;
    	if(renk==9) renk=1;
    	if(renk==10) renk=5;
    	if(renk==11) renk=10;
    	tolerans=ohm*renk/100;
    	if(ohm>=1000){
    		printf("\n%.2fk ohm -+ %%%.2f",ohm/1000,renk);
    		printf("\nTolerans araligi: %.2fk ohm - %.2fk ohm",(ohm-tolerans)/1000,(ohm+tolerans)/1000);
		}else{
			printf("\n%.2f ohm -+ %%%.2f",ohm,renk);
    		printf("\nTolerans araligi: %.2f ohm - %.2f ohm",(ohm-tolerans),(ohm+tolerans));
		}
	}
	if(bant==6){
    	printf("1. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk*100;
    	printf("2. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk*10;
    	printf("3. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	ohm+=renk;
    	printf("4. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	for(i=0;i<renk;i++){carpan*=10;}
    	if(renk==10) carpan=0.1;
    	if(renk==11) carpan=0.01;
    	ohm*=carpan;
    	printf("5. siradaki renk kodunu giriniz: "); scanf("%f",&renk);
    	if(renk==5) renk=0.5;
    	if(renk==6) renk=0.25;
    	if(renk==7) renk=0.1;
    	if(renk==8) renk=0.05;
    	if(renk==9) renk=1;
    	if(renk==10) renk=5;
    	if(renk==11) renk=10;
    	tolerans=ohm*renk/100;
    	printf("6. siradaki renk kodunu giriniz: "); scanf("%f",&sicak);    	
    	if(sicak==1) sicaklik=100;
    	if(sicak==2) sicaklik=50;
    	if(sicak==3) sicaklik=15;
    	if(sicak==4) sicaklik=25;
    	if(ohm>=1000){
    		printf("\n%.2fk ohm -+ %%%.2f",ohm/1000,renk);
    		printf("\nTolerans araligi: %.2fk ohm - %.2fk ohm",(ohm-tolerans)/1000,(ohm+tolerans)/1000);
		}else{
			printf("\n%.2f ohm -+ %%%.2f",ohm,renk);
    		printf("\nTolerans araligi: %.2f ohm - %.2f ohm",(ohm-tolerans),(ohm+tolerans));
		}
    	printf("\nSicaklik katsayisi: %.0f ppm/C",sicaklik);
    	printf("\n1 C'de direncin degisimi: %.2f ohm",ohm/sicaklik/100);  	 
	}
	return 0;
}

