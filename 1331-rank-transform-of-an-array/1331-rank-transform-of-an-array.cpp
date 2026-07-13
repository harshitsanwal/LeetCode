class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> list=arr;
        sort(list.begin(),list.end());
        list.erase(unique(list.begin(),list.end()),list.end()); 
        int n=list.size();
        vector<int> result(arr.size());  
        for(int i=0;i<(int)arr.size();i++){
            int start=0,end=n-1;
            int target=arr[i];
            int rank=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(list[mid]==target){
                    rank=mid;
                    break;
                }
                else if(list[mid]<target)
                    start=mid+1;
                else
                    end=mid-1;
            }
            result[i]=rank+1;
        }
        return result;
    }
};