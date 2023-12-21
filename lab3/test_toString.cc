#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include "date.h"
#include "enumerator.h"

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;
using std::ostream;
using std::vector;
using std::istringstream;
using std::cin;

ostream& operator<<(ostream& os, const vector<string>& v) {
	for (const string& s : v) {
		os << s << " ";
	}
	return os;
}
template <typename T>
string toString(T obj){
ostringstream os;
os << obj;
return os.str();
}

template <typename T>
T string_cast(string s) {
  istringstream ss(s);
  T obj;
  ss >> obj;
  if (ss.fail() || !ss.eof())
    throw std::invalid_argument("Invalid argument");
  return obj;
}

int main() {
  try {
    int x = string_cast<int>("10");
    double y = string_cast<double>("3.14");
    vector<string> v = {"Hej", "tjena", "hallå", "hejsan", "tjosan"};
    Date d = string_cast<Date>("2023-02-15");
    string st = toString(x);
    string testexception = "123abc";
    int testexception2 = string_cast<int>("123abc");

    /*string dateTest;
    cin >> dateTest;
    Date u = string_cast<Date>(dateTest);
*/
    cout << st << " (10)" << endl;

    string st1 = toString(y);
    cout << st1 << " (3.14)" << endl;

    string st2 = toString(v);
    cout << st2 << "(Hej tjena hallå hejsan tjosan)" << endl;

    string st3 = toString(d);
    cout << st3 << " (2023-02-15)\n";

    string testex = toString(testexception2);
    cout << testex << " (123abc)\n";

  } catch (std::invalid_argument& e) {
    cout << "Error: " << e.what() << endl;
  }
}