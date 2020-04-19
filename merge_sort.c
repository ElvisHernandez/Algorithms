#include <stdio.h>

int merge_sort(int nums[], int nums_length);
int merge_halfs(int nums[],int la[], int la_len, int ra[], int ra_len);

int main(void) {
    int nums[] = {-8,-31,0,7,5,-31,43};
    int nums_length = 7;
    merge_sort(nums,nums_length);
    for (int i = 0; i < nums_length; i++) {
        printf("nums element %i: %i\n", i+1,nums[i]);
    }
}

int merge_sort(int nums[], int nums_length) {
    if (nums_length == 1) 
        return 0;
    int mid = nums_length/2;
    int la[mid];
    int ra[nums_length-mid];
    for (int i = 0; i < mid; i++) {
        la[i] = nums[i];
    }
    for (int i = 0; i < nums_length-mid; i++) {
        ra[i] = nums[mid+i];
    }
    merge_sort(la, mid);
    merge_sort(ra,nums_length-mid);
    merge_halfs(nums,la,mid,ra, nums_length-mid);
}

int merge_halfs(int nums[],int la[], int la_len, int ra[], int ra_len) {
    int merged_array[la_len + ra_len];
    int la_i = 0;
    int ra_i = 0; // these are the left, right, and merged arrays respectively
    int ma_i = 0;
    
    while (la_i < la_len && ra_i < ra_len) {
        if (la[la_i] < ra[ra_i]) {
            merged_array[ma_i] = la[la_i];
            la_i++;
        } else {
            merged_array[ma_i] = ra[ra_i];
            ra_i++;
        }
        ma_i++;
    }
    while (la_i < la_len) {
        merged_array[ma_i] = la[la_i];
        la_i++;
        ma_i++;
    }
    while (ra_i < ra_len) {
        merged_array[ma_i] = ra[ra_i];
        ra_i++;
        ma_i++;
    }
    for (int i = 0; i < (la_len + ra_len); i++) {
        nums[i] = merged_array[i];
        //printf("Merged array element %i: %i\n", i+1,merged_array[i]);
    }
}


