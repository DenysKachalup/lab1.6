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
			
			Time g;
			bool t;
			t = g.Poriv1(1,1,1,1,1,1);
			Assert::AreEqual(t, false);
		}
	};
}
