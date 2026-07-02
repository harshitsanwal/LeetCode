# LeetCode
# Problem Number 9: Palendrome Number

### Probem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.

### Example 1: Input: x = 121
### Output: true
### Explanation: 121 reads as 121 from left to right and from right to left.
### Link: - https://leetcode.com/problems/palindrome-number/description/
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

### Problem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

### Example 1: Input: nums = [2,7,11,15], target = 9
### Output: [0,1]
### Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2: Input: nums = [3,2,4], target = 6
### Output: [1,2]

### Example 3: Input: nums = [3,3], target = 6
### Output: [0,1]
### Link : https://leetcode.com/problems/two-sum/description/
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
# Problem Number 7: Reverse Integer
### Problem Statement:Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

### Example 1:Input: x = 123
### Output: 321

### Example 2:Input: x = -123
### Output: -321

### Example 3:Input: x = 120
### Output: 21

### Link :https://leetcode.com/problems/reverse-integer/description/
### Language: C
```c
int reverse(int x){
    long rev=0,a;
    
    while(x)
    {
        a=x%10;
        rev=rev*10+a;
        x=x/10;
    }
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0;
    }
    return rev;
}
```
# Problem Number 13: Roman to Integer
### Problem Statement:Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

### Symbol       Value
### I      =       1
### V      =       5
### X      =       10
### L      =       50
### C      =       100
### D      =       500
### M      =       1000
### For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

### Explanation: Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

### I can be placed before V (5) and X (10) to make 4 and 9. 
### X can be placed before L (50) and C (100) to make 40 and 90. 
### C can be placed before D (500) and M (1000) to make 400 and 900.
### Given a roman numeral, convert it to an integer.

### Example 1:Input: s = "III"
### Output: 3
### Explanation: III = 3.

### Example 2:Input: s = "LVIII"
### Output: 58
### Explanation: L = 50, V= 5, III = 3.

### Example 3: Input: s = "MCMXCIV"
### Output: 1994
### Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
### Link:https://leetcode.com/problems/roman-to-integer/description/
### Language: C++
```c++
class Solution {
public:
    int char2num(char a)
    {
        switch(a)
        {
            case 'I': return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D': return 500;
            case 'M':return 1000;
            default :return 0;
        }
    }
    int romanToInt(string s) {
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(i+1<s.length())
        {
            if(char2num(s[i])<char2num(s[i+1]))
            sum=sum-char2num(s[i]);
            else
            sum=sum+char2num(s[i]);
        }
        else
        sum=sum+char2num(s[i]);
    }
    return sum;
    }
};
```
# Problem Number 283: Move Zeroes

## Problem Statement: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.Note that you must do this in-place without making a copy of the array.

 ### Example 1: Input: nums = [0,1,0,3,12]
### Output: [1,3,12,0,0]
### Example 2: Input: nums = [0]
### Output: [0]
### Link: https://leetcode.com/problems/move-zeroes/description/
### language: C
```c
void moveZeroes(int* nums, int numsSize) {
      int j=0;
      for(int i=0;i<numsSize;i++)
      {
        if(nums[i]!=0)
        {
        nums[j]=nums[i];
        j++;
        }
       }
       while(j<numsSize)
       {
        nums[j]=0;
        j++;
       }
}
```
# Problem Number 27: Remove Element

### Problem Statement: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.Return k.
### Custom Judge:The judge will test your solution with the following code:
### int[] nums = [...]; // Input array
### int val = ...; // Value to remove
### int[] expectedNums = [...]; // The expected answer with correct length.
                          
### int k = removeElement(nums, val); // Calls your implementation

### assert k == expectedNums.length;
### sort(nums, 0, k); // Sort the first k elements of nums
### for (int i = 0; i < actualLength; i++) {
### assert nums[i] == expectedNums[i];}
### If all assertions pass, then your solution will be accepted.

 ### Example 1:Input: nums = [3,2,2,3], val = 3
### Output: 2, nums = [2,2,_,_]
### Explanation: Your function should return k = 2, with the first two elements of nums being 2.It does not matter what you leave beyond the returned k (hence they are underscores).
### Example 2:Input: nums = [0,1,2,2,3,0,4,2], val = 2
### Output: 5, nums = [0,1,4,0,3,_,_,_]
### Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4. Note that the five elements can be returned in any order.It does not matter what you leave beyond the returned k (hence they are underscores).

### Link:https://leetcode.com/problems/remove-element/description/
### Language : C
```c
int removeElement(int* nums, int numsSize, int val) {
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}
```




<!---LeetCode Topics Start-->
# LeetCode Topics
## Linked List
|  |
| ------- |
| [0021-merge-two-sorted-lists](https://github.com/harshitsanwal/LeetCode/tree/master/0021-merge-two-sorted-lists) |
## Recursion
|  |
| ------- |
| [0021-merge-two-sorted-lists](https://github.com/harshitsanwal/LeetCode/tree/master/0021-merge-two-sorted-lists) |
## Math
|  |
| ------- |
| [0009-palindrome-number](https://github.com/harshitsanwal/LeetCode/tree/master/0009-palindrome-number) |
<!---LeetCode Topics End-->