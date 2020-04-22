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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
	ASSERT_TRUE(obj.isPalindrome(""));
	ASSERT_TRUE(obj.isPalindrome("a"));
	ASSERT_TRUE(obj.isPalindrome("BaB"));
	ASSERT_TRUE(obj.isPalindrome("BAAB"));
	ASSERT_TRUE(obj.isPalindrome("\0\0"));
	ASSERT_TRUE(obj.isPalindrome("  "));
	ASSERT_TRUE(obj.isPalindrome(" "));
	ASSERT_TRUE(obj.isPalindrome("a  a"));
}

TEST(PracticeTest, is_not_a_palindrome)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome("ab"));
	ASSERT_TRUE(obj.isPalindrome("Bab"));
	ASSERT_TRUE(obj.isPalindrome("1\0"));
	ASSERT_TRUE(obj.isPalindrome("Aa"));
	ASSERT_FALSE(obj.isPalindrome("abc12cba"));
}

TEST(PracticeTest, very_unhappy_palindrome_forward) {
	for(int i='Z'+1; i<'z'; i++) {
		char a = i;
		char b = i+('a'-'A');
		ASSERT_TRUE(obj.isPalindrome(std::string(a)+std::string(b));
	}
}

TEST(PracticeTest, very_unhappy_palindrome_backward) {
	for(int i='A'-1; i<0; i--) {
		char a = i;
		char b = i+('a'-'A');
		ASSERT_TRUE(obj.isPalindrome(std::string(a)+std::string(b));
	}
}

TEST(PracticeTest, sort_decending)
{
	Practice obj;
	int a;
	int b;
	int c;
	obj.sortDescending(a=3, b=2, c=1);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 2);
		ASSERT_EQ(c, 3);
	obj.sortDescending(a=1, b=2, c=3);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 2);
		ASSERT_EQ(c, 3);
	obj.sortDescending(a=1, b=1, c=1);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 1);
		ASSERT_EQ(c, 1);
	obj.sortDescending(a=0, b=0, c=0);
		ASSERT_EQ(a, 0);
		ASSERT_EQ(b, 0);
		ASSERT_EQ(c, 0);
	obj.sortDescending(a=1, b=0, c=1);
		ASSERT_EQ(a, 1);
		ASSERT_EQ(b, 1);
		ASSERT_EQ(c, 0);
}