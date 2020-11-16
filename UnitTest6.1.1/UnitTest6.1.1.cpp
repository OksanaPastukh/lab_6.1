#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1/project6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		/*TEST_METHOD(TestMethod1)
		{
			int count;
			int n = 25;
			int p[25] = { 1,2,3,4,5,6,7,8,9,10,11,12,39,15,45,63,32,54,31,23,25,24,26,28,37 };
			count = Count(p, n);
			 Assert::AreEqual(count,24);
		}*/
		TEST_METHOD(TestMethod2)
		{
			int count;
			int n = 25;
			int p[25] = { 2,2,3,4,5,6,7,8,9,10,11,12,25,26,45,63,32,54,31,23,25,24,39,28,37 };
			count = Count(p, n);
			Assert::AreEqual(count, 23);
		}
		TEST_METHOD(TestMethod3)
		{
			int count;
			int n = 25;
			int p[25] = { 2,2,3,4,5,6,7,8,9,10,11,12,25,27,45,63,32,54,31,23,25,24,39,28,37 };
			count = Count(p, n);
			Assert::AreEqual(count, 24);
		}
	};
}
