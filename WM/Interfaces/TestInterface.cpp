#include "stdafx.h"
#include "TestInterface.h"
#include <assert.h>

static const wchar_t *const szTitle[] = {L"T0", L"T1", L"T2", L"T3", L"T4", L"T5", L"T6", L"T7", L"T8", L"T9", L"T10", L"T11", L"T12", L"T13", L"T14", L"T15"};
static const wchar_t *const szAbbrv[] = {L"A0", L"A1", L"A2", L"A3", L"A4", L"A5", L"A6", L"A7", L"A8", L"A9", L"A10", L"A11", L"A12", L"A13", L"A14", L"A15"};

const wchar_t *TestInterface::getName() const
{
	return L"TEST";
}

int TestInterface::getValueCount() const
{
	return 16;
}

Decimal TestInterface::getValue0() const
{
	return DEC_LIT(0);
}

Decimal TestInterface::getValue1() const
{
	return DEC_LIT(1);
}

Decimal TestInterface::getValue2() const
{
	return DEC_LIT(2);
}

Decimal TestInterface::getValue3() const
{
	return DEC_LIT(3);
}

Decimal TestInterface::getValue4() const
{
	return DEC_LIT(4);
}

Decimal TestInterface::getValue5() const
{
	return DEC_LIT(5);
}

Decimal TestInterface::getValue6() const
{
	return DEC_LIT(6);
}

Decimal TestInterface::getValue7() const
{
	return DEC_LIT(7);
}

Decimal TestInterface::getValue8() const
{
	return DEC_LIT(8);
}

Decimal TestInterface::getValue9() const
{
	return DEC_LIT(9);
}

Decimal TestInterface::getValue10() const
{
	return DEC_LIT(10);
}

Decimal TestInterface::getValue11() const
{
	return DEC_LIT(11);
}

Decimal TestInterface::getValue12() const
{
	return DEC_LIT(12);
}

Decimal TestInterface::getValue13() const
{
	return DEC_LIT(13);
}

Decimal TestInterface::getValue14() const
{
	return DEC_LIT(14);
}

Decimal TestInterface::getValue15() const
{
	return DEC_LIT(15);
}

const wchar_t *TestInterface::getTitle(int i) const
{
	assert((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))));

	return szTitle[i];
}

const wchar_t *TestInterface::getAbbreviation(int i) const
{
	assert((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))));

	return szAbbrv[i];
}

void TestInterface::setValue0(Decimal x)
{
}

void TestInterface::setValue1(Decimal x)
{
}

void TestInterface::setValue2(Decimal x)
{
}

void TestInterface::setValue3(Decimal x)
{
}

void TestInterface::setValue4(Decimal x)
{
}

void TestInterface::setValue5(Decimal x)
{
}

void TestInterface::setValue6(Decimal x)
{
}

void TestInterface::setValue7(Decimal x)
{
}

void TestInterface::setValue8(Decimal x)
{
}

void TestInterface::setValue9(Decimal x)
{
}

void TestInterface::setValue10(Decimal x)
{
}

void TestInterface::setValue11(Decimal x)
{
}

void TestInterface::setValue12(Decimal x)
{
}

void TestInterface::setValue13(Decimal x)
{
}

void TestInterface::setValue14(Decimal x)
{
}

void TestInterface::setValue15(Decimal x)
{
}