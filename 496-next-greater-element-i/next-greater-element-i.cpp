class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> op;
        for(int i = 0;i<nums1.size();i++){
        int gt = -1;
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    for(int k = j+1;k<nums2.size();k++){
                        if(nums2[k]>nums1[i]){ 
                       gt =  nums2[k];
                        break;
                        }
                    }
                    break;
                }
            }
            op.push_back(gt);
        }
        return op;
    }
};