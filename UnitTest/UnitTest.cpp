#include "pch.h"
#include "CppUnitTest.h"
#include "Factor.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(CalculatorTests)
    {
    public:
        // Тут плюс
        TEST_METHOD(Plus_Positive)
        {
            double a = 4.5, b = 2.5;
            double expected = 7.0;

            double actual = Plus(a, b);

            Assert::AreEqual(expected, actual, 0.0001);
        }

        TEST_METHOD(Plus_WithZero)
        {
            Assert::AreEqual(-3.5, Plus(0.0, -3.5), 0.0001);
        }

        // Тут минус
        TEST_METHOD(Munis_Normal)
        {
            Assert::AreEqual(3.0, Munis(8.0, 5.0), 0.0001);
        }

        TEST_METHOD(Munis_Equal)
        {
            Assert::AreEqual(0.0, Munis(4.2, 4.2), 0.0001);
        }

        // Тут умножение
        TEST_METHOD(Mulitu_Normal)
        {
            Assert::AreEqual(15.0, Mulitu(3.0, 5.0), 0.0001);
        }

        TEST_METHOD(Mulitu_ByZero)
        {
            Assert::AreEqual(0.0, Mulitu(123.45, 0.0), 0.0001);
        }

        // Тут деление
        TEST_METHOD(Dilen_Valid)
        {
            double a = 10.0, b = 2.0;
            double result = 0.0;

            bool success = Dilen(a, b, result);

            Assert::IsTrue(success);
            Assert::AreEqual(5.0, result, 0.0001);
        }

        TEST_METHOD(Dilen_ZeroDividend)
        {
            double result = -1.0;
            bool success = Dilen(0.0, 5.0, result);

            Assert::IsTrue(success);
            Assert::AreEqual(0.0, result, 0.0001);
        }

        TEST_METHOD(Dilen_ByZero)
        {
            double a = 10.0, b = 0.0;
            double result = 0.0;

            bool success = Dilen(a, b, result);

            Assert::IsFalse(success);
        }
    };
}
