#include "pch.h"
#include "CppUnitTest.h"
#include "Z:/university/ооп/програми/1.5/Number.h"
#include "Z:/university/ооп/програми/1.5/Number.cpp"
#include "Z:/university/ооп/програми/1.5/Real.h"
#include "Z:/university/ооп/програми/1.5/Real.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Number l;
			l.Init(2, 3);
			int test = l.Sum();
			Assert::AreEqual(5, test);
		}
	};
}
