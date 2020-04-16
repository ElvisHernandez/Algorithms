#include <stdio.h>

int binary_search(int nums[], int nums_length, int target);

int main(void){
  int array[] = {-77,-3,-1,0,4,13,29,81};
  int target = -77;
  binary_search(array, 8, target);
}

int binary_search(int nums[],int nums_length, int target){
    int start = 0;
    int end = nums_length - 1;
    int mid = (end + start) / 2;
    while (end >= start) {
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
         mid = (start+end)/2;
    }
    return mid;
}

