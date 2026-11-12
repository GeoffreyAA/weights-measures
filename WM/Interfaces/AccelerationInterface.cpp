#include "stdafx.h"
#include "AccelerationInterface.h"

//static const wchar_t *const szTitle[] = {L"IDS_TITLE_CENTIMETRES_PER_SECOND_SQUARED", L"IDS_TITLE_FEET_PER_SECOND_SQUARED", L"IDS_TITLE_METRES_PER_SECOND_SQUARED", L"IDS_TITLE_GFORCE"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_CENTIMETRES_PER_SECOND_SQUARED", L"IDS_ABBRV_FEET_PER_SECOND_SQUARED", L"IDS_ABBRV_METRES_PER_SECOND_SQUARED", L"IDS_ABBRV_GFORCE"};

const wchar_t *AccelerationInterface::getName() const
{
	return L"IDS_ACCELERATION";
}

int AccelerationInterface::getValueCount() const
{
	return 4;
}

Decimal AccelerationInterface::getValue0() const
{
	return a.getCentimetresPerSecondSquared();
}

Decimal AccelerationInterface::getValue1() const
{
	return a.getFeetPerSecondSquared();
}

Decimal AccelerationInterface::getValue2() const
{
	return a.getMetresPerSecondSquared();
}

Decimal AccelerationInterface::getValue3() const
{
	return a.getGForce();
}
/*
const wchar_t *AccelerationInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}
*/
const wchar_t *AccelerationInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void AccelerationInterface::setValue0(Decimal x)
{
	a.setCentimetresPerSecondSquared(x);
}

void AccelerationInterface::setValue1(Decimal x)
{
	a.setFeetPerSecondSquared(x);
}

void AccelerationInterface::setValue2(Decimal x)
{
	a.setMetresPerSecondSquared(x);
}

void AccelerationInterface::setValue3(Decimal x)
{
	a.setGForce(x);
}