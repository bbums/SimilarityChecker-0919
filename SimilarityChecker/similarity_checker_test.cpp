#include "gmock/gmock.h"
#include "similarity_checker.cpp"

using namespace testing;

TEST(SimCheckerTest, SAMELENGTH) {
	SimilarityChecker sc;
	int expected = 60;
	int actual = sc.getScore("ASD", "DSA");
	EXPECT_EQ(expected, actual);
}

TEST(SimCheckerTest, PARTSCORE1) {
	SimilarityChecker sc;
	int expected = 20;
	int actual = sc.getScore("AAABB", "BAA");
	EXPECT_EQ(expected, actual);
}

TEST(SimCheckerTest, PARTSCORE2) {
	SimilarityChecker sc;
	int expected = 30;
	int actual = sc.getScore("AA", "AAE");
	EXPECT_EQ(expected, actual);
}

TEST(SimCheckerTest, TWOTIMESLENGTH) {
	SimilarityChecker sc;
	int expected = 0;
	int actual = sc.getScore("A", "BB");
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}