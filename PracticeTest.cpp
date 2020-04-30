/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, palindrome_double_char)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, palindrome_empty_string)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome(""));
}

TEST(PracticeTest, palindrome_null_chars)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("\0\0"));
}

TEST(PracticeTest, palindrome_single_char)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("a"));
}

TEST(PracticeTest, palindrome_space)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome(" "));
}

TEST(PracticeTest, palindrome_double_space)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("  "));
}

TEST(PracticeTest, palindrome_space_middle)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("a a"));
}

TEST(PracticeTest, palindrome_double_space_middle)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("a  a"));
}

TEST(PracticeTest, palindrome_upper_lowercase)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("Bb"));
}

TEST(PracticeTest, palindrome_lower_uppercase)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("bB"));
}

TEST(PracticeTest, palindrome_three_char_upper_lowercase)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("Bab"));
}

TEST(PracticeTest, palindrome_three_char_lower_uppercase)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("baB"));
}

TEST(PracticeTest, palindrome_two_char)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome("ab"));
	
}

TEST(PracticeTest, palindrome_outside_true)
{
    Practice obj;
    ASSERT_FALSE(obj.isPalindrome("abc12cba"));
}

TEST(PracticeTest, sort_out_of_order)
{
	Practice obj;
	int a;
	int b;
	int c;
	obj.sortDescending(a=3, b=2, c=1);
		ASSERT_EQ(a, 3);
		ASSERT_EQ(b, 2);
		ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_all_equal) {
	int a, b, c;
	Practice obj;
	obj.sortDescending(a=1, b=1, c=1);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 1);
		ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_all_zero) {
	int a, b, c;
	Practice obj;
	obj.sortDescending(a=0, b=0, c=0);
		ASSERT_EQ(a, 0);
		ASSERT_EQ(b, 0);
		ASSERT_EQ(c, 0);
}

TEST(PracticeTest, sort_in_order) {
	int a, b, c;
	Practice obj;
	obj.sortDescending(a=1, b=2, c=3);
		ASSERT_EQ(a, 3);
		ASSERT_EQ(b, 2);
		ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_two_duplicates) {
	int a, b, c;
	Practice obj;
	obj.sortDescending(a=1, b=0, c=1);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 1);
		ASSERT_EQ(c, 0);
}