//#include<cs50.h>
#include<stdio.h>

int main(void){
    float average(float total, int length);
    int length; //length or quantity of tests
    
    //ask for the length or quantity of tests
    printf("How many tests? ");
    scanf("%i", &length);
    
    //variables
    float score[length]; float total = 0; float menos = 0; 
    
    //get the grades and the total
    for(int i=0;i<length;i++){
        printf("\nGrade %i: ",(i+1));
        scanf("%.2f", &score[i]);
        total+=score[i];
        
        //check if the numbers are available
        if(score[i]<0 || score[i]>10){
            total-=score[i];
            i--;
        }
    }
    //print the average
    printf("The average is %.2f!\n", average(total, length));
    
}
//return the average
float average(float total, int length){
    return total/(float)length;
}