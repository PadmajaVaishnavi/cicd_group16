#include "pch.h"
#include "CppUnitTest.h"
#include "..\cicd_group16\cicd_group16.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MathFunctionsTests
{
	TEST_CLASS(MathFunctionsTests)
	{
	public:
		TEST_METHOD(TestRectangleArea)
		{
			MathFunctions math;
			double actual = math.RectangleArea(3.0, 4.0);
			double expected = 12.0;
			Assert::AreEqual(expected, actual);
		}
	};
}