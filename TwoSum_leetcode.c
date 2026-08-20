#include<stdio.h>
#include<stdlib.h>

int main(){
    int size, target;
    int i, j;
    
    printf("Type the size of array:\n");
    scanf("%d", &size);

    int nums[size];

    for(i=0; i<size; i++){
        printf("Type the number you want to add:\n");
        scanf("%d", &nums[i]);
    }

    printf("Type the target:\n");
    scanf("%d", &target);

    for(i=0; i<size; i++){
        for(j=1 + i; j<size; j++){
            if(nums[i] + nums[j] == target){
                printf("[%d,%d]", i, j);
                break;
            }
        }
    }

    return 0;
}