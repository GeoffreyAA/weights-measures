#include "stdafx.h"
#include "InformationInterface.h"

static const wchar_t *const szAbrv[] = {L"IDS_ABRV_BITS", L"IDS_ABRV_BYTES", L"IDS_ABRV_KB", L"IDS_ABRV_MB", L"IDS_ABRV_GB", L"IDS_ABRV_TB", L"IDS_ABRV_PB", L"IDS_ABRV_EB", L"IDS_ABRV_ZB"};

int InformationInterface::getValueCount() const
{
	return (9);
}

double InformationInterface::getValue1() const
{
	return (i.getBits());
}

double InformationInterface::getValue2() const
{
	return (i.getBytes());
}

double InformationInterface::getValue3() const
{
	return (i.getKB());
}

double InformationInterface::getValue4() const
{
	return (i.getMB());
}

double InformationInterface::getValue5() const
{
	return (i.getGB());
}

double InformationInterface::getValue6() const
{
	return (i.getTB());
}

double InformationInterface::getValue7() const
{
	return (i.getPB());
}

double InformationInterface::getValue8() const
{
	return (i.getEB());
}

double InformationInterface::getValue9() const
{
	return (i.getZB());
}

const wchar_t *InformationInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void InformationInterface::setValue1(double x)
{
	i.setBits(x);
}

void InformationInterface::setValue2(double x)
{
	i.setBytes(x);
}

void InformationInterface::setValue3(double x)
{
	i.setKB(x);
}

void InformationInterface::setValue4(double x)
{
	i.setMB(x);
}

void InformationInterface::setValue5(double x)
{
	i.setGB(x);
}

void InformationInterface::setValue6(double x)
{
	i.setTB(x);
}

void InformationInterface::setValue7(double x)
{
	i.setPB(x);
}

void InformationInterface::setValue8(double x)
{
	i.setEB(x);
}

void InformationInterface::setValue9(double x)
{
	i.setZB(x);
}