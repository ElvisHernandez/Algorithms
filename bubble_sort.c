#include <stdio.h> 

void bubble_sort(int nums[], int nums_length);

int main(void) {
   int nums[] = {7,-1,3,0,9,-33,-5}; 
   bubble_sort(nums,7);
    for (int i = 0; i < 7; i++) {
        printf("Array element %i: %i\n", i+1, nums[i]);
    }
}

void bubble_sort(int nums[], int nums_length) {
    int swap_counter = -1;
    int index = 0;
    int current_max = 0;
    while (swap_counter != 0) {
        swap_counter = 0;
        for (int i = 0; i < nums_length; i++) {
            if (nums[i] > nums[i+1]) {
                current_max = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = current_max;
                swap_counter++;
            }
        }
    }
}   
