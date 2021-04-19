/* 
 * Author: Derren Lyons
 * ECE141 - Spring 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //declare variable for array size and have user input desired size
    int ARRAY_SIZE;
    printf("Enter size: ");
    scanf("%d", &ARRAY_SIZE);
    int i;
    
    //declare and initialize array...for loop to input values for each element
    int array[ARRAY_SIZE];
    for(i = 0; i < ARRAY_SIZE; ++i){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }   
    
    //compute two smallest integers in the array
    int smallest = array[0];
    /*initialize secondSmallest as largest supported integer value to insure 
      whatever value input in array is always less than or equal to this value
      and greater than min value*/ 
    int secondSmallest= 2147483647;
    //this for loop will compute minimum value
    for(i = 0; i < ARRAY_SIZE; ++i){
        if(array[i]<smallest){
            smallest = array[i];
        }
    }
    //this for loop will compute second minimum value
    for(i = 0; i < ARRAY_SIZE; ++i){
        if((array[i]>smallest)&&(array[i]<=secondSmallest)){
            secondSmallest = array[i];
        }
    }
    
    printf("Two Smallest are %d and %d", smallest, secondSmallest);
    
 
    
    return (EXIT_SUCCESS);
}

