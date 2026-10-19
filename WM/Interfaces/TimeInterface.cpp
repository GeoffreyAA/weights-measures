#include "stdafx.h"
#include "TimeInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_MILLISECONDS", L"IDS_TITLE_SECONDS", L"IDS_TITLE_MINUTES", L"IDS_TITLE_HOURS", L"IDS_TITLE_DAYS", L"IDS_TITLE_WEEKS", L"IDS_TITLE_MONTHS", L"IDS_TITLE_YEARS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_MILLISECONDS", L"IDS_ABBRV_SECONDS", L"IDS_ABBRV_MINUTES", L"IDS_ABBRV_HOURS", L"IDS_ABBRV_DAYS", L"IDS_ABBRV_WEEKS", L"IDS_ABBRV_MONTHS", L"IDS_ABBRV_YEARS"};

const wchar_t *TimeInterface::getName() const
{
	return L"IDS_TIME";
}

int TimeInterface::getValueCount() const
{
	return 8;
}

Decimal TimeInterface::getValue0() const
{
	return t.getMilliseconds();
}

Decimal TimeInterface::getValue1() const
{
	return t.getSeconds();
}

Decimal TimeInterface::getValue2() const
{
	return t.getMinutes();
}

Decimal TimeInterface::getValue3() const
{
	return t.getHours();
}

Decimal TimeInterface::getValue4() const
{
	return t.getDays();
}

Decimal TimeInterface::getValue5() const
{
	return t.getWeeks();
}

Decimal TimeInterface::getValue6() const
{
	return t.getMonths();
}

Decimal TimeInterface::getValue7() const
{
	return t.getYears();
}

const wchar_t *TimeInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *TimeInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void TimeInterface::setValue0(Decimal x)
{
	t.setMilliseconds(x);
}

void TimeInterface::setValue1(Decimal x)
{
	t.setSeconds(x);
}

void TimeInterface::setValue2(Decimal x)
{
	t.setMinutes(x);
}

void TimeInterface::setValue3(Decimal x)
{
	t.setHours(x);
}

void TimeInterface::setValue4(Decimal x)
{
	t.setDays(x);
}

void TimeInterface::setValue5(Decimal x)
{
	t.setWeeks(x);
}

void TimeInterface::setValue6(Decimal x)
{
	t.setMonths(x);
}

void TimeInterface::setValue7(Decimal x)
{
	t.setYears(x);
}