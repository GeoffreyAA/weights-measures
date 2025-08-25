#include "stdafx.h"
#include "PixelDensityInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_DIAGONAL", L"IDS_TITLE_PIXELS_W", L"IDS_TITLE_PIXELS_H", L""};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_DIAGONAL", L"IDS_ABRV_PIXELS_W", L"IDS_ABRV_PIXELS_H", L"IDS_ABRV_PPU"};

int PixelDensityInterface::getValueCount() const
{
	return (4);
}

double PixelDensityInterface::getValue1() const
{
	return (p.getDiagonal());
}

double PixelDensityInterface::getValue2() const
{
	return (p.getPixelsWidth());
}

double PixelDensityInterface::getValue3() const
{
	return (p.getPixelsHeight());
}

double PixelDensityInterface::getValue4() const
{
	return (p.getPixelsPerUnit());
}

const wchar_t *PixelDensityInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *PixelDensityInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void PixelDensityInterface::setValue1(double x)
{
	p.setDiagonal(x);
}

void PixelDensityInterface::setValue2(double x)
{
	p.setPixelsWidth(x);
}

void PixelDensityInterface::setValue3(double x)
{
	p.setPixelsHeight(x);
}

void PixelDensityInterface::setValue4(double x)
{
}