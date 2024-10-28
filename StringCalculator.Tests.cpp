#include "StringCalculator.h"
#include <gtest/gtest.h>
 
//TEST(TestSuiteName, TestCaseName)
TEST(string_calculator_add,when_passed_a_single_number_returns_0_for_Empty){
  //Arrange
  StringCalculator objUnderTest;
  string input="";
  int expectedValue=0;
 
  //Act
  int actualValue=objUnderTest.Add(input);
 
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
 
TEST(string_calculator_add,when_passed_a_single_number_returns_0_for_0){
  //Arrange
  StringCalculator objUnderTest;
  string input="0";
  int expectedValue=0;
 
  //Act
  int actualValue=objUnderTest.Add(input);
 
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
 
TEST(string_calculator_add,when_passed_a_single_number_returns_1_for_1){
  //Arrange
  StringCalculator objUnderTest;
  string input="1";
  int expectedValue=1;
 
  //Act
  int actualValue=objUnderTest.Add(input);
 
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
TEST(string_calculator_add,when_passed_two_comma_delimited_numbers){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,7";
  int expectedValue=8;
 
  //Act
  int actualValue=objUnderTest.Add(input);
 
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
TEST(string_calculator_add,when_passed_multiple_comma_delimited_numbers){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,4,3";
  int expectedValue=8;
 
  //Act
  int actualValue=objUnderTest.Add(input);
 
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
TEST(string_calculator_add,when_passed__newline_and_comma){
  //Arrange
  StringCalculator objUnderTest;
  string input="1\n2,3";
  int expectedValue=6;
 
  //Act
  int actualValue=objUnderTest.Add(input);
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
TEST(string_calculator_add,when_passed_a_delimiter){
  //Arrange
  StringCalculator objUnderTest;
  string input="//;\n3;5";
  int expectedValue=8;
 
  //Act
  int actualValue=objUnderTest.Add(input);
  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);

TEST(string_calculator_add,when_passed_negative_numbers_throws_an_exception_listing_invalid_values){
  //Arrange
  StringCalculator objUndertest;
  string input = "1,-2,-4,5";
  int expectedValue = 6;

  //act
    ASSERT_THROW({
      objUndertest.Add(input);
    }, std::invalid_argument);

    // try {
    //     calculator.Add("1,-2,-4,5");
    // } catch (const std::invalid_argument& e) {
    //     EXPECT_STREQ(e.what(), "Negatives not allowed: -2,-4");
    // }
}
