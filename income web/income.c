// created by CODEINTELLECT
#include <stdio.h>
int main(){
    float income,tax,totaltax;

    //this code calculates tax based on our annual income
    printf("ENTER YOUR ANNUAL INCOME: ");
    scanf("%f",&income);
   
    // intializing tax variable
    tax=0.0;

    // this c program use for loop to calculate annual income tax
   
   //up to 400000 no tax
    if(income<=400000)
    {tax=0;}

    //400001 to 800000 5%
    else if (income<=800000)
    {tax=(income - 400000)*0.05;}

    //800001 to 1200000 10%
    else if(income<=1200000)
    {tax =(400000*0.05)+(income - 800000)*0.1;}

    //1200001 to 1600000 15%
    else if(income<=16000000)
    {tax=(400000*0.05)+(400000*0.1)+(income - 1200000)*0.15;}
    
    //1600001 to 2000000 20%
    else if(income<=2000000)
    {tax=(400000*0.05)+(800000*0.1)+(income - 1200000)*0.2;}
    //2000001 to 2400000 25%
    else if(income<=2400000)
    {tax=(400000*0.05)+(800000*0.1)+(1200000*0.15)+(income - 2000000)*0.25;}
    //above 2400000 30%
    else
    {tax=(400000*0.05)+(800000*0.1)+(1200000*0.15)+(income - 2400000)*0.3;}



    //additional 4% cess on tax(health and education perpose)
    totaltax= tax + (tax * 0.04);

    //IGNORE BELOW THIS LINE
    printf("============================================================================\n");

    //output of the annual income tax

    printf("YOUR ANNUAL INCOME TAX IS : %.2f\n",tax);

    printf("YOUR HEALTH AND EDUCATION TAX IS : %.2f\n",totaltax);
    
    printf("YOUR TOTAL TAX IS : %.2f\n",totaltax+tax);


    //IGNORE BELOW THIS LINE
    printf("============================================================================\n");

    return 0;


// End of the annual income tax calculator Project

// Credit gose to SUPRATIK SINHA,RASHDA QAMAR,,ANIRUDDHA MONDAL

//THANK YOU FOR VISITING CODEINTELLECT PROJECT

}