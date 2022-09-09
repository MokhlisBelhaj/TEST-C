#include <stdio.h>
#include <stdlib.h>

 main()
{
int day;
  printf("nomber:");
  scanf("%d",&day);
  if(day>0 && day<8){
  
switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
   
   	
}
}else {
	printf("entrer entre 1 et 7");
	scanf("%d",&day);
}
//calculatrice
printf("\nvouler vous commencez?\ntaper oui  vous acceptez ou non si vous refusez:");
char ouinon[3];
char sgine;
int n1,n2;
float op; 
scanf("%s",ouinon);
 if(ouinon[0]=='o'&&ouinon[1]=='u'&&ouinon[2]=='i'){
 	while(ouinon[0]=='o'&&ouinon[1]=='u'&&ouinon[2]=='i'){
 		
	
     	printf("donnez le premier nombre:");
 	scanf("\n%d",&n1);
 		printf("donnez le signe:");
 	scanf("\n%c",&sgine);
 	    printf("donnez le deuxieme nombre:");
 	scanf("\n%d",&n2);
 	if(sgine=='+'){
 		op=n1+n2;
	 }
	 else if (sgine=='-'){
 		op=n1-n2;
	 }
	 else if (sgine=='*'){
 		op=n1*n2;
	 }
	 else if (sgine=='/'){
	 	if(n2==0){
	 		
	 		printf("impossible \n");
	 		while(n2==0){
			 
	 		printf("donnez le deuxieme nombre:");
         	scanf("\n%d",&n2);
         	}
		 }
	 		op=n1/n2;     
 	         
		 }
	 
	 printf("%.2f",op);
	 printf("\nvouler vous recommencez?\ntaper oui  vous acceptez ou non si vous refusez:");
	 scanf("%s",ouinon);
	 
	 }
	 }





}


