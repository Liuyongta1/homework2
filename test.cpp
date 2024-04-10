#include "pch.h"

// ����ȫΪ���������
TEST(MaxSubarraySumTest, HandlesAllPositive) {
    std::vector<int> nums = { 1, 2, 3, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 10);
}

// ����ȫΪ���������
TEST(MaxSubarraySumTest, HandlesAllNegative) {
    std::vector<int> nums = { -1, -2, -3, -4 };
    EXPECT_EQ(maxSubarraySum(nums), -1);
}

// ����������ϣ�������������м�����
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayInMiddle) {
    std::vector<int> nums = { -2, -1, 4, -1, 2, 1, -5, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 6);
}

// ����������ϣ�����������ڿ�ʼ�����
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayAtStart) {
    std::vector<int> nums = { 4, -1, 2, 1, -2, -1, -3, -4 };
    EXPECT_EQ(maxSubarraySum(nums), 6);
}

// ����������ϣ������������ĩβ�����
TEST(MaxSubarraySumTest, HandlesMixedWithMaxSubarrayAtEnd) {
    std::vector<int> nums = { -3, -4, -1, -2, 1, 2, 3, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 9);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}