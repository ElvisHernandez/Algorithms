#include <stdio.h> 

int insertion_sort(int nums[],int nums_length);

int main(void) {
    int nums[] = {-7,-31,-32,8,0,5,9};
    int nums_length = 7;
    insertion_sort(nums,nums_length);
    for (int i = 0; i < nums_length; i++) {
        printf("nums element %i: %i\n", i+1, nums[i]);
    }
}

int insertion_sort(int nums[],int nums_length) {
    for (int i = 0; i < nums_length-1; i++) {
        int unsorted_element = nums[i+1];
        int j = i;
        while (j >= 0 && nums[j] > unsorted_element) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = unsorted_element;
    }
}
