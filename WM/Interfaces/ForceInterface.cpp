#include "stdafx.h"
#include "ForceInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_DYNES", L"IDS_TITLE_POUNDALS", L"IDS_TITLE_NEWTONS", L"IDS_TITLE_POUND_FORCE", L"IDS_TITLE_KILOGRAM_FORCE"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_DYNES", L"IDS_ABBRV_POUNDALS", L"IDS_ABBRV_NEWTONS", L"IDS_ABBRV_POUND_FORCE", L"IDS_ABBRV_KILOGRAM_FORCE"};

const wchar_t *ForceInterface::getName() const
{
	return L"IDS_FORCE";
}

int ForceInterface::getValueCount() const
{
	return 5;
}

Decimal ForceInterface::getValue0() const
{
	return f.getDynes();
}

Decimal ForceInterface::getValue1() const
{
	return f.getPoundals();
}

Decimal ForceInterface::getValue2() const
{
	return f.getNewtons();
}

Decimal ForceInterface::getValue3() const
{
	return f.getPoundForce();
}

Decimal ForceInterface::getValue4() const
{
	return f.getKilogramForce();
}

const wchar_t *ForceInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *ForceInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void ForceInterface::setValue0(Decimal x)
{
	f.setDynes(x);
}

void ForceInterface::setValue1(Decimal x)
{
	f.setPoundals(x);
}

void ForceInterface::setValue2(Decimal x)
{
	f.setNewtons(x);
}

void ForceInterface::setValue3(Decimal x)
{
	f.setPoundForce(x);
}

void ForceInterface::setValue4(Decimal x)
{
	f.setKilogramForce(x);
}