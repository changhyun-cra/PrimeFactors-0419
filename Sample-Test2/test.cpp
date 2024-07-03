#include "pch.h"
#include "../Project2/PrimeFactor.cpp"
using namespace std;

TEST(testcasename, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}