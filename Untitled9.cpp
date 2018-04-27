#include<stdio.h>

int main(){
	float avm[5][3]=
	{
		{0.7,700,0},
		{0.3,500,0},
		{0.5,300,0},
		{0.2,100,0},
		{0.1,10,0},
		
				
	};
	
	float  kg=1.0;
	float enyuksekkg;
	int enfazlabutce;
	int para;
	
	printf("canta kac kg=\n");
	scanf("%f",&enyuksekkg);
	enyuksekkg=kg;
	
	printf("en fazla para=");
	scanf("%d",&enfazlabutce);
	para=enfazlabutce;
	
	int i=1;
	int kontrol=0;
	
	while(enfazlabutce>=10 && kontrol!=1){
		for (i=1;i<5;i++){
			if(avm[i][0]<=enyuksekkg && avm[i][1]<=enfazlabutce){
				enyuksekkg-=avm[i][0];
				enfazlabutce-=avm[i][1];
				avm[i][2]++;
				kontrol=1;
			}
		}
	}
	if(kontrol){
		printf("%d tl %.2f kg \n",para,kg);
		}
	if(avm[0][2]!=0){
		printf("%.2f kamera\n",avm[0][2]);
	}
	if(avm[1][2]!=0){
		printf("%.2f telefon\n",avm[1][2]);
	}
	if(avm[2][2]!=0){
		printf("%.2f fotomakine\n",avm[2][2]);
	}
	if(avm[3][2]!=0){
		printf("%.2f saat\n",avm[3][2]);
	}
	if(avm[4][2]!=0){
		printf("%.2f anahtar\n",avm[4][2]);
	}
	else{
		printf("%d tl %.2f kg bunlarla alisveris yapilmaz.",para,kg);
    }
	return 0;
}
