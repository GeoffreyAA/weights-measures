#include "stdafx.h"
#include "StorageInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_ADV_GB", L"IDS_TITLE_ACTUAL_GB", L"IDS_TITLE_ADV_TB", L"IDS_TITLE_ACTUAL_TB"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_ADV_GB", L"IDS_ABRV_ACTUAL_GB", L"IDS_ABRV_ADV_TB", L"IDS_ABRV_ACTUAL_TB"};

int StorageInterface::getValueCount() const
{
	return (4);
}

double StorageInterface::getValue1() const
{
	return (s.getAdvertisedGB());
}

double StorageInterface::getValue2() const
{
	return (s.getActualGB());
}

double StorageInterface::getValue3() const
{
	return (s.getAdvertisedTB());
}

double StorageInterface::getValue4() const
{
	return (s.getActualTB());
}

const wchar_t *StorageInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *StorageInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void StorageInterface::setValue1(double x)
{
	s.setAdvertisedGB(x);
}

void StorageInterface::setValue2(double x)
{
	s.setActualGB(x);
}

void StorageInterface::setValue3(double x)
{
	s.setAdvertisedTB(x);
}

void StorageInterface::setValue4(double x)
{
	s.setActualTB(x);
}