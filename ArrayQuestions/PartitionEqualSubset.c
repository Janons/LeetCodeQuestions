#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool canPartition(int* nums, int numsSize);


int main(){
    return 0;
}


bool canPartition(int* nums, int numsSize)
{

    int i,j;

    if (!(numsSize/2)) return false;

    int target = numsSize/2;

    int dp[numsSize][target];


    for (i = 0; i<numsSize;i++){
        for (j = target; j>0; j--){
            //main idea of the code will be here so we must  focus at this [art]

        }


    }


}