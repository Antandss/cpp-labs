#include<iostream>
#include<iomanip>
#include<ios>
#include<sstream>
#include<vector>

using namespace std;

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
string toString(T obj){
	ostringstream os;
}
