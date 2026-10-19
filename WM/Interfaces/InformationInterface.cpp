#include "stdafx.h"
#include "InformationInterface.h"

static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_BITS", L"IDS_ABBRV_BYTES", L"IDS_ABBRV_KB", L"IDS_ABBRV_MB", L"IDS_ABBRV_GB", L"IDS_ABBRV_TB", L"IDS_ABBRV_PB", L"IDS_ABBRV_EB", L"IDS_ABBRV_ZB", L"IDS_ABBRV_YB", L"IDS_ABBRV_RB", L"IDS_ABBRV_QB"};

const wchar_t *InformationInterface::getName() const
{
	return L"IDS_INFORMATION";
}

int InformationInterface::getValueCount() const
{
	return 12;
}

Decimal InformationInterface::getValue0() const
{
	return i.getBits();
}

Decimal InformationInterface::getValue1() const
{
	return i.getBytes();
}

Decimal InformationInterface::getValue2() const
{
	return i.getKB();
}

Decimal InformationInterface::getValue3() const
{
	return i.getMB();
}

Decimal InformationInterface::getValue4() const
{
	return i.getGB();
}

Decimal InformationInterface::getValue5() const
{
	return i.getTB();
}

Decimal InformationInterface::getValue6() const
{
	return i.getPB();
}

Decimal InformationInterface::getValue7() const
{
	return i.getEB();
}

Decimal InformationInterface::getValue8() const
{
	return i.getZB();
}

Decimal InformationInterface::getValue9() const
{
	return i.getYB();
}

Decimal InformationInterface::getValue10() const
{
	return i.getRB();
}

Decimal InformationInterface::getValue11() const
{
	return i.getQB();
}

const wchar_t *InformationInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void InformationInterface::setValue0(Decimal x)
{
	i.setBits(x);
}

void InformationInterface::setValue1(Decimal x)
{
	i.setBytes(x);
}

void InformationInterface::setValue2(Decimal x)
{
	i.setKB(x);
}

void InformationInterface::setValue3(Decimal x)
{
	i.setMB(x);
}

void InformationInterface::setValue4(Decimal x)
{
	i.setGB(x);
}

void InformationInterface::setValue5(Decimal x)
{
	i.setTB(x);
}

void InformationInterface::setValue6(Decimal x)
{
	i.setPB(x);
}

void InformationInterface::setValue7(Decimal x)
{
	i.setEB(x);
}

void InformationInterface::setValue8(Decimal x)
{
	i.setZB(x);
}

void InformationInterface::setValue9(Decimal x)
{
	i.setYB(x);
}

void InformationInterface::setValue10(Decimal x)
{
	i.setRB(x);
}

void InformationInterface::setValue11(Decimal x)
{
	i.setQB(x);
}