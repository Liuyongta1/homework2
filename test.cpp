#include "pch.h"

// 测试全为正数的情况
TEST(MaxSubarraySumTest, HandlesAllPositive) {
    std::vector<int> nums = { 1, 2, 3, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 10);
}

// 测试全为负数的情况
TEST(MaxSubarraySumTest, HandlesAllNegative) {
    std::vector<int> nums = { -1, -2, -3, -4 };
    EXPECT_EQ(maxSubarraySum(nums), -1);
}

// 测试正负混合，最大子数组在中间的情况
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayInMiddle) {
    std::vector<int> nums = { -2, -1, 4, -1, 2, 1, -5, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 6);
}

// 测试正负混合，最大子数组在开始的情况
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayAtStart) {
    std::vector<int> nums = { 4, -1, 2, 1, -2, -1, -3, -4 };
    EXPECT_EQ(maxSubarraySum(nums), 6);
}

// 测试正负混合，最大子数组在末尾的情况
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayAtEnd) {
    std::vector<int> nums = { -3, -4, -1, -2, 1, 2, 3, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 9);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}