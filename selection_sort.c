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
        int min_index = i;
        for (int j = i; j < nums_length; j++) {
            if (nums[j] < nums[min_index] ) {
                min_index = j;
            }
        }
        int current_value = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = current_value; 
    }
} 
