#include <gtest/gtest.h>
#include "../head/func.hpp"

TEST(ExtractNumbersTest, BasicTest) {
    std::string input = "abc123def45ghi6";
    auto result = extractNumbers(input);
    
    ASSERT_EQ(result.size(), 3);
    EXPECT_EQ(result[0], 123);
    EXPECT_EQ(result[1], 45);
    EXPECT_EQ(result[2], 6);
}

TEST(ExtractNumbersTest, OnlyDigits) {
    std::string input = "123456";
    auto result = extractNumbers(input);
    
    ASSERT_EQ(result.size(), 1);
    EXPECT_EQ(result[0], 123456);
}

TEST(ExtractNumbersTest, OnlyLetters) {
    std::string input = "abcdef";
    auto result = extractNumbers(input);
    
    EXPECT_TRUE(result.empty());
}

TEST(ExtractNumbersTest, EmptyString) {
    std::string input = "";
    auto result = extractNumbers(input);
    
    EXPECT_TRUE(result.empty());
}

TEST(FormatNumbersTest, BasicFormatting) {
    std::vector<int> numbers = {123, 45, 6};
    std::string result = formatNumbers(numbers);
    
    EXPECT_EQ(result, "123 45 6");
}

TEST(FormatNumbersTest, EmptyVector) {
    std::vector<int> numbers;
    std::string result = formatNumbers(numbers);
    
    EXPECT_TRUE(result.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}