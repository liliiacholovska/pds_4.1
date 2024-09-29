#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_4.1/pds_4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestLexicographicPermutations)
        {
            std::ostringstream output;
            std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

            lexicographicPermutations(3);

            std::cout.rdbuf(oldCoutBuffer);

            std::string strOutput = output.str();
            Assert::IsTrue(strOutput.find("permutation = {1, 2, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {1, 3, 2}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {2, 1, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {2, 3, 1}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {3, 1, 2}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {3, 2, 1}") != std::string::npos);
        }
	};
}