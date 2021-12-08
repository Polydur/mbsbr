#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int select;   
	float phr_require,oil_carrier,answer,net_rubber,net_oil,desired_styrene,sbr_value,gpps_value,sum;
	float percent_styrene=23.5;
	printf("\n SBR Oil-Extended");
	printf("\n\n Programmer:Davood Jegarvand");
	printf("\n\n Email:davoodjegarvand@gmail.com");
	printf("\n__________________________________________________");
	printf("\n");
	printf("Please enter the number of your item:");
	printf("\n 1- Finding of SBR-1712 phr at recipe  \n 2- Making of HSBR");
        printf("\n");
	scanf("%i",&select);
	if(select==1){
	printf("Please enter the PHR of SBR Oil-Extended:");
	scanf("%f",&phr_require);
	printf("\n");

	oil_carrier=1-0.2727;
	answer=phr_require/oil_carrier;
	net_oil=answer*0.2727;
	net_rubber=answer-net_oil;
	printf("\n__________________________________________________");
	printf("\nSBR Oil-Extended: %.2f PHR",answer);	
	printf("\n");
	printf("\nRubber net: %.2f PHR",net_rubber);
	printf("\nOil net: %.2f PHR",net_oil);
	printf("\n");
   }
   else if(select==2){
	printf("\nPlease enter the %% Desired-STYRENE of SBR :");
	scanf("%f",&desired_styrene);
	percent_styrene=percent_styrene/100;
	sbr_value=100*percent_styrene;
	gpps_value=desired_styrene-sbr_value;
	sum=100+gpps_value;
	printf("\n");
	printf("\nSBR-1502 : 100 PHR");
	printf("\nGPPS: %.2f PHR",gpps_value);
	printf("\n____________________");
	printf("\nSBR %% %.2f Styrene:%.2f PHR ",desired_styrene,sum);
        printf("\n");  
 }
   else{
      printf("ERROR, TRY AGAIN...");  
   }
}
	
