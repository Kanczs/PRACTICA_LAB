
#include <iostream>
#include "data.h"

Date::Date ( int mm, int dd, int yy)
{
	setMonth(mm);
	setDay(dd);
	setYear(yy);
}

void Date::setMonth (int mm)
{
	if ( (1 <= mm) && (mm <= 12)) month = mm;
	else month = 1;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay (int dd)
{
	day = dd;
}

int Date::getDay()
{
	return day;
}

void Date::setYear (int yy)
{
	year = yy;
}

int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
