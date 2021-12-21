#include "stdafx.h"
#include "TimeInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_MILLISECONDS", L"IDS_TITLE_SECONDS", L"IDS_TITLE_MINUTES", L"IDS_TITLE_HOURS", L"IDS_TITLE_DAYS", L"IDS_TITLE_WEEKS", L"IDS_TITLE_MONTHS", L"IDS_TITLE_YEARS"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_MILLISECONDS", L"IDS_ABRV_SECONDS", L"IDS_ABRV_MINUTES", L"IDS_ABRV_HOURS", L"IDS_ABRV_DAYS", L"IDS_ABRV_WEEKS", L"IDS_ABRV_MONTHS", L"IDS_ABRV_YEARS"};

int TimeInterface::getValueCount() const
{
	return (8);
}

double TimeInterface::getValue1() const
{
	return (t.getMilliseconds());
}

double TimeInterface::getValue2() const
{
	return (t.getSeconds());
}

double TimeInterface::getValue3() const
{
	return (t.getMinutes());
}

double TimeInterface::getValue4() const
{
	return (t.getHours());
}

double TimeInterface::getValue5() const
{
	return (t.getDays());
}

double TimeInterface::getValue6() const
{
	return (t.getWeeks());
}

double TimeInterface::getValue7() const
{
	return (t.getMonths());
}

double TimeInterface::getValue8() const
{
	return (t.getYears());
}

const wchar_t *TimeInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *TimeInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void TimeInterface::setValue1(double x)
{
	t.setMilliseconds(x);
}

void TimeInterface::setValue2(double x)
{
	t.setSeconds(x);
}

void TimeInterface::setValue3(double x)
{
	t.setMinutes(x);
}

void TimeInterface::setValue4(double x)
{
	t.setHours(x);
}

void TimeInterface::setValue5(double x)
{
	t.setDays(x);
}

void TimeInterface::setValue6(double x)
{
	t.setWeeks(x);
}

void TimeInterface::setValue7(double x)
{
	t.setMonths(x);
}

void TimeInterface::setValue8(double x)
{
	t.setYears(x);
}