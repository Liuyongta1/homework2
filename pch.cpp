#include "pch.h"
#include <iostream>
#include <vector>
#include <sstream>
#include "pch.h"

using namespace std;

int maxSubarraySum(std::vector<int>& nums) {
    int n = nums.size();
    int maxSum = nums[0];
    int currSum = nums[0];

    for (int i = 1; i < n; i++) {
        currSum = std::max(nums[i], currSum + nums[i]);
        maxSum = std::max(maxSum, currSum);
    }

    return maxSum;
}
int runMaxSubarraySum() {
    vector<int> nums;
    string input;

    getline(cin, input);

    stringstream ss(input);
    string numStr;

    while (getline(ss, numStr, ',')) {
        int num = stoi(numStr);
        nums.push_back(num);
    }

    int maxSum = maxSubarraySum(nums);

    cout << maxSum << endl;

    return 0;
}