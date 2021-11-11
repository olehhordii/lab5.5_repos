#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 15;
			double depth = 0;
			double c;
			c = C(6, 4, 1, depth);
			Assert::AreEqual(c, t);
		}
	};
}
