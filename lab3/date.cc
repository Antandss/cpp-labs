#include <ctime>  // time and localtime
#include "date.h"
#include <iomanip>
#include <ios>
#include <algorithm>

using std::setw;
using std::setfill;
using std::ostream;
using std::istream;
using std::ios_base;
using std::string;
using std::count;
using std::getline;

int Date::daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date() {
	time_t timer = time(0); // time in seconds since 1970-01-01
	tm* locTime = localtime(&timer); // broken-down time
	year = 1900 + locTime->tm_year;
	month = 1 + locTime->tm_mon;
	day = locTime->tm_mday;
}

Date::Date(int y, int m, int d): year(y), month(m), day(d) {}

int Date::getYear() const {
	return year;
}

int Date::getMonth() const {
	return month;
}

int Date::getDay() const {
	return day;
}

void Date::next() {
	int maxDays = daysPerMonth[month - 1];

	if(day < maxDays){
		 day++;
	}
	if(day == maxDays && month < 12){
		day = 1;
		month++;
	}
	if(day == maxDays && month == 12){
		year++; 
		day = 1;
		month = 1;
	}

}
ostream& operator<<(ostream& os, const Date& d) {
	os << setw(4) << setfill('0') << d.year << '-';
	os << setw(2) << setfill('0') << d.month << '-';
	os << setw(2) << setfill('0') << d.day;
	return os;
}
istream& operator>>(istream& input, Date& date) {
	string line;
	getline(input, line);
	size_t n = count(line.begin(), line.end(), '-');
	if (n != 2){
		input.setstate (ios_base::failbit);
		return input;
	}
	string year = line.substr(0, 4);
	if (count(year.begin(), year.end(), '-') > 0 ){
		input.setstate (ios_base::failbit);
		return input;
	}
	date.year = stoi(year);
	string month = line.substr(5, 2);
	if (date.month > 12 || count(month.begin(), month.end(), '-') > 0){
		input.setstate (ios_base::failbit);
		return input;
	}
	date.month = stoi(month);
	string day = line.substr(8, 2);
	if (date.day > date.daysPerMonth[date.month -1] || count(day.begin(), day.end(), '-') > 0) {
		input.setstate (ios_base::failbit);
		return input;
	}
	date.day = stoi(day);
	return input;
}

