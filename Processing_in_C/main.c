#include <math.h>
#include <stdio.h>

int main() {
 
 int UCP;
 int UUCW;
 int UAW;
 int KLOC;
 int choice;
 
 float PM_Organic;
 float PM_Semidetached;
 float PM_Embedded;
 
 float D_Organic;
 float D_Semidetached;
 float D_Embedded;
 
 float TCF;
 float ECF;
 
 
 
     printf("********************Welcome to effort estimation calculator*******************\n");
     printf("Press 1 for UCP:\nOR\nPress 2 for Cocomo:\n");
     scanf("%d", &choice);  

    if(choice == 1){
 
         printf("*************WELCOME TO UCP EFFORT ESTIMATION CALCULATOR*************\n");
 
 
    printf("Enter Unadjusted Use Case Weight(UUCW):");
    scanf("%d", &UUCW);  
    
    printf("Enter Unadjusted Actor Weight(UAW):");
    scanf("%d", &UAW);  

    printf("Enter Technical Complexity Factor(TCF):");
    scanf("%f", &TCF);  

    printf("Enter Environmental Complexity Factor(ECF):");
    scanf("%f", &ECF);  
    
    UCP = (UUCW + UAW) * TCF * ECF ;
    
    printf("**********************************");
    
    printf("Use Case Points(UCP) = %d",UCP);
    return 0;
    
    }
    
    else if(choice == 2){
    
             printf("*************WELCOME TO COCOMO EFFORT ESTIMATION CALCULATOR*************\n");
    
    printf("Enter KLOC:\n");
    scanf("%d", &KLOC);  

    PM_Organic = 2.4 * pow(KLOC, 1.05);
    PM_Semidetached = 3.0 * pow(KLOC, 1.12);
    PM_Embedded = 3.6 * pow(KLOC, 1.20);

    D_Organic = 2.5 * pow(PM_Organic, 0.38);
    D_Semidetached = 2.5 * pow(PM_Semidetached, 0.35);
    D_Embedded = 2.5 * pow(PM_Embedded, 0.32);


    printf("-------Organic Mode------\n");
    printf("Person Month PM = %f\n",PM_Organic);
    printf("Development = %f\n",D_Organic);

    printf("\n-------Semidetached------\n");
    printf("Person Month PM = %f\n",PM_Semidetached);
    printf("Development = %f\n",D_Semidetached);

    printf("\n-------Embedded------\n");
    printf("Person Month PM = %f\n",PM_Embedded);
    printf("Development = %f\n",D_Embedded);
    
    return 0;
    }
    
    
}

