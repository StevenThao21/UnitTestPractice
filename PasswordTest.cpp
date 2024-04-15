/**
 * Unit Tests for Password class
 **/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
protected:
	PracticeTest() {}		   // constructor runs before each test
	virtual ~PracticeTest() {} // destructor cleans up after tests
	virtual void SetUp() {}	   // sets up before each test (after constructor)
	virtual void TearDown() {} // clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

// Example:
// Change the name
TEST(PasswordTest, two_letter_password)
{
	Password my_password;
	// Change the ("")
	int actual = my_password.count_leading_characters("ZZ");
	// Change ASSERT_EQ(x, actual)
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, three_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZZ");
	ASSERT_EQ(3, actual);
}

TEST(PasswordTest, four_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("AAAA");
	ASSERT_EQ(4, actual);
}

TEST(PasswordTest, five_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("AAAAA");
	ASSERT_EQ(5, actual);
}

// This test will fail because it can't read no string character
// TEST(PasswordTest, six_letter_password)
// {
// 	Password my_password;
// 	int actual = my_password.count_leading_characters("");
// 	ASSERT_EQ(0, actual);
// }

// has_mixed_case

TEST(PasswordTest, single_cap_password)
{
	Password my_password;
	int actual = my_password.has_mixed_case("Aa");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, empty_string_password)
{
	Password my_password;
	int actual = my_password.has_mixed_case("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, num_password)
{
	Password my_password;
	int actual = my_password.has_mixed_case("1232");
	ASSERT_EQ(4, actual);
}

TEST(PasswordTest, camelcase_password)
{
	Password my_password;
	int actual = my_password.has_mixed_case("HeLlO");
	ASSERT_EQ(5, actual);
}
