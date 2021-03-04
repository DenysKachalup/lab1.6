#include "pch.h"
#include "CppUnitTest.h"
#include "../laba1.6/Time.h"
#include "../laba1.6/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			
			Time :: Triad t2;
			t2.Init(1, 2, 3);
			Time t1;
			t1.Init1(t2);
			bool t = t1.Equal();
			Assert::AreEqual(t, true);
		}
	};
}
