#include <stdio.h>

int binary_search(int nums[], int nums_length, int target);

int main(void){
  int array[] = {11,7,-1,5,83,-13};
  int target = -1;
  binary_search(array, 6, target);
}

int binary_search(int nums[],int nums_length, int target){
	int target_index = 0;
    while (nums_length > 0) {
        printf("nums_length: %i\n", nums_length);
        nums_length--;
    }
}
