#include "stdafx.h"
#include "TorqueInterface.h"

//static const wchar_t *const szTitle[] = {L"IDS_TITLE_POUND_FORCE_INCHES", L"IDS_TITLE_NEWTON_METRES", L"IDS_TITLE_POUND_FORCE_FEET", L"IDS_TITLE_KILOGRAM_FORCE_METRES"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_POUND_FORCE_INCHES", L"IDS_ABBRV_NEWTON_METRES", L"IDS_ABBRV_POUND_FORCE_FEET", L"IDS_ABBRV_KILOGRAM_FORCE_METRES"};

const wchar_t *TorqueInterface::getName() const
{
	return L"IDS_TORQUE";
}

int TorqueInterface::getValueCount() const
{
	return 4;
}

Decimal TorqueInterface::getValue0() const
{
	return t.getPoundForceInches();
}

Decimal TorqueInterface::getValue1() const
{
	return t.getNewtonMetres();
}

Decimal TorqueInterface::getValue2() const
{
	return t.getPoundForceFeet();
}

Decimal TorqueInterface::getValue3() const
{
	return t.getKilogramForceMetres();
}
/*
const wchar_t *TorqueInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}
*/
const wchar_t *TorqueInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void TorqueInterface::setValue0(Decimal x)
{
	t.setPoundForceInches(x);
}

void TorqueInterface::setValue1(Decimal x)
{
	t.setNewtonMetres(x);
}

void TorqueInterface::setValue2(Decimal x)
{
	t.setPoundForceFeet(x);
}

void TorqueInterface::setValue3(Decimal x)
{
	t.setKilogramForceMetres(x);
}