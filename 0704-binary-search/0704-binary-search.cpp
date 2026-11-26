class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = static_cast<int>(nums.size()) -1;

         while(left <= right){
            int mid = left + (right - left) /2;

            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] < target){
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return -1;
    }
        int main(){
            vector<int> nums = {12, 24, 38, 56, 71, 89};
            int target = 12;
            cout<<search(nums, target) <<endl;
            return 0;
        }
};