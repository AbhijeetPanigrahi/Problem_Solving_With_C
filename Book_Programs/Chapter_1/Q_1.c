/*
PROBLEM: Milage Reimbursement calculation of a Sales person.
ANALYSIS: To Solve this problem, we need to get the sales person's starting odometer 
reading, ending odometer reading in miles. To get the travelling distance, differentiate 
between ending & starting odometer reading. Finally, to calculate reimbursement of sales 
person, multiply $.35 with the travelling distance.
DATA REQUIREMENTS:
Problem Inputs:
double start_reading; //To store starting odometer reading.
double end_reading; //To store ending odometer reading.
Problem Outputs:
double remb_price; //To store total reimbursement price.
double dif_odoreading; //To store the difference between odometer readings.
DESIGN:
INITIAL ALGORITHM:
Step1. Read the Starting odometer reading in miles.
Step2. Store Starting odometer reading.
Step3. Read the Ending odometer reading in miles.
Step4. Store Ending odometer reading. 
Step5. Compute the travelled distance by calculating the difference between two odometer 
readings.
Step6. Calculate the reimbursement price by multiplying $0.35 with the distance travelled.
Step7. Display the travelled distance and total reimbursement price.
IMPLEMENTATION:
*/
#include<stdio.h>
int main()
{
 double start_reading, end_reading, dif_odoreading,remb_price;
 printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
 printf("Enter beginning odometer reading=>"); //Step1
 scanf("%lf", &start_reading); //Step2
 printf("Enter ending odometer reading=>"); //Step3
 scanf("%lf", &end_reading); //Step4
 dif_odoreading=(end_reading - start_reading); //Step5
 remb_price=(dif_odoreading*0.35); //Step6
 printf("You traveled %.1f miles. \t At $0.35 per mile,\n Your reimbursement is Rs %.2f.",
 dif_odoreading, remb_price); //Step7
 return(0);
}