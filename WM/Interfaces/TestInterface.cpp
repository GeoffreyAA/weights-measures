#include "stdafx.h"
#include "TestInterface.h"
#include <assert.h>

static const wchar_t *const szTitles[] = {L"T1", L"T2", L"T3", L"T4", L"T5", L"T6", L"T7", L"T8", L"T9", L"T10", L"T11", L"T12", L"T13", L"T14", L"T15", L"T16"};
static const wchar_t *const szAbrv[] =   {L"A1", L"A2", L"A3", L"A4", L"A5", L"A6", L"A7", L"A8", L"A9", L"A10", L"A11", L"A12", L"A13", L"A14", L"A15", L"A16"};

int TestInterface::getValueCount() const
{
	return 16;
}

double TestInterface::getValue1() const
{
	return 1;
}

double TestInterface::getValue2() const
{
	return 2;
}

double TestInterface::getValue3() const
{
	return 3;
}

double TestInterface::getValue4() const
{
	return 4;
}

double TestInterface::getValue5() const
{
	return 5;
}

double TestInterface::getValue6() const
{
	return 6;
}

double TestInterface::getValue7() const
{
	return 7;
}

double TestInterface::getValue8() const
{
	return 8;
}

double TestInterface::getValue9() const
{
	return 9;
}

double TestInterface::getValue10() const
{
	return 10;
}

double TestInterface::getValue11() const
{
	return 11;
}

double TestInterface::getValue12() const
{
	return 12;
}

double TestInterface::getValue13() const
{
	return 13;
}

double TestInterface::getValue14() const
{
	return 14;
}

double TestInterface::getValue15() const
{
	return 15;
}

double TestInterface::getValue16() const
{
	return 16;
}

const wchar_t *TestInterface::getTitle(int i) const
{
	assert((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))));

	return szTitles[i];
}

const wchar_t *TestInterface::getAbbreviation(int i) const
{
	assert((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))));

	return szAbrv[i];
}

void TestInterface::setValue1(double x)
{
}

void TestInterface::setValue2(double x)
{
}

void TestInterface::setValue3(double x)
{
}

void TestInterface::setValue4(double x)
{
}

void TestInterface::setValue5(double x)
{
}

void TestInterface::setValue6(double x)
{
}

void TestInterface::setValue7(double x)
{
}

void TestInterface::setValue8(double x)
{
}

void TestInterface::setValue9(double x)
{
}

void TestInterface::setValue10(double x)
{
}

void TestInterface::setValue11(double x)
{
}

void TestInterface::setValue12(double x)
{
}

void TestInterface::setValue13(double x)
{
}

void TestInterface::setValue14(double x)
{
}

void TestInterface::setValue15(double x)
{
}

void TestInterface::setValue16(double x)
{
}