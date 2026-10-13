#include "pch.h"
#include "CppUnitTest.h"
#include "../lab053/lab053.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
        TEST_METHOD(Test1)
        {
            Assert::AreEqual(2.7553832, k(1), 0.000001);
        }

        TEST_METHOD(Test2)
        {
            Assert::AreEqual(-0.3665778, k(-1), 0.000001);
        }

        TEST_METHOD(Test3)
        {
            Assert::AreEqual(1.0, k(0), 0.000001);
        }

        TEST_METHOD(Test4)
        {
            Assert::AreEqual(0.9999858, k(0.5), 0.000001);
        }
	};
}
