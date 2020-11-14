#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10]{ 3, -5, 1, 4, 15, -12, 6, 19, -24, 3 };
			int c = Max(a, 10, 10, 3);
			Assert::AreEqual(c, 19);
		}
	};
}
