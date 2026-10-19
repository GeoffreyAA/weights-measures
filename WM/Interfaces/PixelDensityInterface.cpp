#include "stdafx.h"
#include "PixelDensityInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_DIAGONAL", L"IDS_TITLE_PIXELS_W", L"IDS_TITLE_PIXELS_H", L""};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_DIAGONAL", L"IDS_ABBRV_PIXELS_W", L"IDS_ABBRV_PIXELS_H", L"IDS_ABBRV_PPU"};

const wchar_t *PixelDensityInterface::getName() const
{
	return L"IDS_PIXEL_DENSITY";
}

int PixelDensityInterface::getValueCount() const
{
	return 4;
}

Decimal PixelDensityInterface::getValue0() const
{
	return p.getDiagonal();
}

Decimal PixelDensityInterface::getValue1() const
{
	return p.getPixelsWidth();
}

Decimal PixelDensityInterface::getValue2() const
{
	return p.getPixelsHeight();
}

Decimal PixelDensityInterface::getValue3() const
{
	return p.getPixelsPerUnit();
}

const wchar_t *PixelDensityInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *PixelDensityInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void PixelDensityInterface::setValue0(Decimal x)
{
	p.setDiagonal(x);
}

void PixelDensityInterface::setValue1(Decimal x)
{
	p.setPixelsWidth(x);
}

void PixelDensityInterface::setValue2(Decimal x)
{
	p.setPixelsHeight(x);
}

void PixelDensityInterface::setValue3(Decimal x)
{
}