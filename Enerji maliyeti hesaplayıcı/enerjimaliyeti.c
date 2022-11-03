#include<stdio.h>
#include<conio.h>

int main(void){
	int i;
	float birim[5],hust,w,ps,birimtesis[5],sermaye[5],topverim=43,yakit=51,altisi=5000,rezerv=1.07,p1=12,p2=25,p3=56,p4=78,ppuant=105,bakim=33;
	for(i=0;i<5;i++){
		printf("%d. birim tesis maliyetini giriniz: ",i+1); scanf("%f",&birimtesis[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d. sermaye masrafi yuzdesini (%%) giriniz: ",i+1); scanf("%f",&sermaye[i]);
	}
	ps=rezerv*ppuant;
	w=(6*(360-bakim)*p1)+(6*(360-bakim)*p2)+(8*(360-bakim)*p3)+(2*(360-bakim)*p4)+(2*(360-bakim)*ppuant);
	hust=(w/ps);
	printf("\n");
	for(i=0;i<5;i++){
		birim[i]=((birimtesis[i]*sermaye[i]/100)/(hust))+(((860*yakit)/1000)/((topverim/100)*altisi));
	}
	printf("Birim enerji maliyeti= ");
	for(i=0;i<5;i++){
		printf("%.4f  ",birim[i]);
	}
	printf("  ($/kwh)");
	return(0);
}