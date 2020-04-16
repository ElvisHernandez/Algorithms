#include <stdio.h>

int binary_search(int nums[], int nums_length, int target);

int main(void){
  int array[] = {-77,-3,-1,0,4,13,29,81};
  int target = 29;
  binary_search(array, 8, target);
}

int binary_search(int nums[],int nums_length, int target){
    printf("The target value is: %i\n", target);
    int start = 0;
    int end = nums_length - 1;
    int mid = (end-start) / 2;
    while (end >= start) {
        printf("These are the start, mid, and end points at the start of the loop: %i %i %i\n", start,mid,end);
        if (nums[mid] == target) {
        printf("This is the target array element: %i\n", nums[mid]);
            return mid;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
         mid = (start+end)/2;
        printf("These are the start, mid, and end points at the end of the loop: %i %i %i\n", start,mid,end);
    }
    printf("Youre target is not in the array. These were the ending start, mid, and end points %i %i %i\n,", start, mid, end );
    return mid;
}
