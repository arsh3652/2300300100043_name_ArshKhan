class Solution {
public:
    int front(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int e = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                e = mid;
                r = mid - 1; 
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return e;
    }

    int back(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int e = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                e = mid;
                l = mid + 1; 
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return e;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = front(nums, target);
        int last = back(nums, target);
        return {first, last};
    }
};
