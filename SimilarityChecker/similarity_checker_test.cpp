#include "gmock/gmock.h"

using namespace testing;

TEST(SimCheckerTest, TC1) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}