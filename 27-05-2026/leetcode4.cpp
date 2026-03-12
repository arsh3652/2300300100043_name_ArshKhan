class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int c=a+b;
        vector<int> m(c);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), m.begin());
        double z;
        if(c%2==0){
            z=(m[c/2]+m[c/2-1])/2.0;
        }
        else{
            z=m[c/2];
        }
        return z;
    }
};