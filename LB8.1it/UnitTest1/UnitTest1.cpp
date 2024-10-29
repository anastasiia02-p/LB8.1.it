#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../LB8.1it/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "BASIC is a programming language based on BASIC.";
			int* counts = countBASICSymbols(str1);
			
			Assert::AreEqual(2, counts[0]); // B
			Assert::AreEqual(2, counts[1]); // A
			Assert::AreEqual(2, counts[2]); // S
			Assert::AreEqual(2, counts[3]); // I
			Assert::AreEqual(2, counts[4]); // C


		}
	};
}
