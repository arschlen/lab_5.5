#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = GeometricTerm(2, 3, 4);
			Assert::AreEqual(result, 54.0, 0.0001); 
		}
	};
}
