#include <stdio.h>

void selection_sort(int nums[], int nums_length); 

int main(void) {
    int nums[] = {-33,-77,5,7,-1,9,0};
    selection_sort(nums, 7);
    for (int i = 0; i < 7; i++){
        printf("Array element %i: %i\n", i+1, nums[i]);
    }
}

void selection_sort(int nums[], int nums_length) {
    for (int i = 0; i < nums_length; i++) {
        int min = nums[i];
        for (int j = i; j < nums_length; j++) {
            if (nums[j] < min ) {
                min = nums[j];
            }
        }
        nums[i] = min;
    }
} 
