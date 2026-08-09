class Solution {
public:
    int answer(int num){
        int add=0;
      while(num){
            int a=num%10;
            add=add+(a*a);
            num=num/10;
      }
      return add;
    }
    bool isHappy(int n) {
        unordered_set<int> ay;
        while(n!=1&&ay.find(n)==ay.end()){
            ay.insert(n);
            n=answer(n);
        }
        return n==1;
    }
};