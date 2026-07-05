int searchInsert(int* nums, int numsSize, int target) {
    int beg=0;
    int end=numsSize-1;
    while(beg<=end){
     int mid=(beg+end)/2;
    if(target==nums[mid])
    return mid;
    else if(target>nums[mid])
       beg=mid+1;
    else
     end=mid-1;
     }  
 return beg;
}
