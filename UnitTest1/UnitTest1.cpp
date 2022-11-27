#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_13_1/lab_13_1.cpp"
#include "../lab_13_1/dod.cpp"
#include "../lab_13_1/sum.cpp"
#include "../lab_13_1/var.cpp"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(test_a)
		{
			x = 1;
			n = 1; 
			a = 1;
			dod();
			Assert::AreEqual(a, 1. / 3);
		}

		TEST_METHOD(test_sum)
		{
			x = 1;
			e = 1;
			n = 1;
			s = 0;
			sum();
			Assert::AreEqual(s, 1 + 1. / 3);
		}


	};
}
