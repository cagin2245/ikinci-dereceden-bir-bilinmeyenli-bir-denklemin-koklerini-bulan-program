#include <stdio.h>
#include <math.h>

main()
{
	float a,b,c,d,kok1,kok2,reel,imajiner;
	printf("a,b,c katsayilarini giriniz: ");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
	
	kok1= (-b-sqrt(d))/(2*a);
	kok2= (-b +sqrt(d))/(2*a);
	printf("1. kok = %f\n",kok1);
	printf("2. kok = %f\n",kok2);
}
 else if(d==0){
 	kok1= -b/2*a;
	kok2= -b/2*a;
	printf("1. kok = %f\n",kok1);
	printf("2. kok = %f\n",kok2);
 	
 }
 else{
 	reel = b-b/(2*a);
 	imajiner = sqrt(-d)/(2*a);
 	printf("Gercek kok yok\n");
 	printf("1. kok = %.2f+%.2fi\n",reel,imajiner,reel,imajiner);
	printf("2. kok = %.2f-%.2fi\n",reel,imajiner,reel,imajiner);
 	
    }
	
	
}
