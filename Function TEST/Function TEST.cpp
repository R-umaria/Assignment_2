#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getArea(int*, int*); 
extern "C" int getPerimeter(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int , int* );

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FunctionTEST
{
	TEST_CLASS(FunctionTEST)
	{
	public:
		
		TEST_METHOD(Area)
		{	//this test area functionality and result should give 2 * 2 = 4
			int Result = 0, l = 1, w = 1;
			Result = getArea(&l, &w);
			Assert::AreEqual(1, Result);
		}

		TEST_METHOD(Perimeter)
		{	//this test perimeter functionality and result should be 2(2+3) = 10
			int Result = 0, l = 2, w = 3;
			Result = getPerimeter(&l, &w);
			Assert::AreEqual(10, Result);
		}

		TEST_METHOD(settingLength_1)
		{	//this is test 1 setLength functionality
			int Result = 0, user_input = 5;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}

		TEST_METHOD(settingWidth_1)
		{	//this is test 1 setWidth functionality
			int Result = 0, user_input = 99;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}

		TEST_METHOD(settingLength_2)
		{	//this is test 2 setLength functionality
			int Result = 0, user_input = 2;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}

		TEST_METHOD(settingWidth_2)
		{	//this is test 2 setWidth functionality
			int Result = 0, user_input = 0;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}

		TEST_METHOD(settingLength_3)
		{	//this is test 3 setLength functionality
			int Result = 0, user_input = 1;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}

		TEST_METHOD(settingWidth_3)
		{	//this is test 3 setWidth functionality
			int Result = 0, user_input = 12;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}
	};
}
