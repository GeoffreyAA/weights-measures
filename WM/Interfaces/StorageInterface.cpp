#include "stdafx.h"
#include "StorageInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_ADV_GB", L"IDS_TITLE_ACTUAL_GB", L"IDS_TITLE_ADV_TB", L"IDS_TITLE_ACTUAL_TB"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_ADV_GB", L"IDS_ABBRV_ACTUAL_GB", L"IDS_ABBRV_ADV_TB", L"IDS_ABBRV_ACTUAL_TB"};

const wchar_t *StorageInterface::getName() const
{
	return L"IDS_STORAGE";
}

int StorageInterface::getValueCount() const
{
	return 4;
}

Decimal StorageInterface::getValue0() const
{
	return s.getAdvertisedGB();
}

Decimal StorageInterface::getValue1() const
{
	return s.getActualGB();
}

Decimal StorageInterface::getValue2() const
{
	return s.getAdvertisedTB();
}

Decimal StorageInterface::getValue3() const
{
	return s.getActualTB();
}

const wchar_t *StorageInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *StorageInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void StorageInterface::setValue0(Decimal x)
{
	s.setAdvertisedGB(x);
}

void StorageInterface::setValue1(Decimal x)
{
	s.setActualGB(x);
}

void StorageInterface::setValue2(Decimal x)
{
	s.setAdvertisedTB(x);
}

void StorageInterface::setValue3(Decimal x)
{
	s.setActualTB(x);
}