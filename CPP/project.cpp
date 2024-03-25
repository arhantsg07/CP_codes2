#include <bits/stdc++.h>
#define sz(x) (int)x.size()

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int i, j;
    for(i = 0; i < sz(nums); i++) {
        for (j = i+1; j < sz(nums); j++)
        {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
        
    }
    return {};
}

int main() {

    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    return 0;
}