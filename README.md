# LeetCode
# Problem Number 9: Given an integer x, return true if x is a palindrome, and false otherwise.

## Probem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have ## exactly one solution, and you may not use the same element twice.You can return the answer in any order.

## Example 1: Input: x = 121
## Output: true
## Explanation: 121 reads as 121 from left to right and from right to left.
## Link: - https://leetcode.com/problems/palindrome-number/description/
### Language: C
```c
bool isPalindrome(int x) {
   if(x<0)
   return false;
   long rev=0,a;
   int y=x;
   while(x)
   {
    a=x%10;
    rev=rev*10+a;
    x=x/10;
   }
   if(rev==y)
    return true;
 return false;
}
```
# Problem Number 1:Two Sum

## Problem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have ## exactly one solution, and you may not use the same element twice. You can return the answer in any order.

## Example 1: Input: nums = [2,7,11,15], target = 9
## Output: [0,1]
## Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

## Example 2: Input: nums = [3,2,4], target = 6
## Output: [1,2]

## Example 3: Input: nums = [3,3], target = 6
## Output: [0,1]
## Link : https://leetcode.com/problems/two-sum/description/
### Language: C
```c
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; 
}
```

 

