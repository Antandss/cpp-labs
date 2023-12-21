#include "Tagremover.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

void testTagRemove() {
  string test = "Here <fdsafsa123> is a tag another one <fasKLFSDklnksf sadasdadas > ";
  string truestr = "Here is a tag another one ";
  TagRemover tr(test);
  string s = tr.getText();
  if (s == truestr)
    cout << "Success" << endl;
  else
    cout << "Failed" << endl;
  tr.print(cout);  
}
void testRemoveSpecialChars() {
  string test = "Hi &lt my name is anthon string &amp chars &gt with spec&nbspchars &amp other fun bla bla";
  string truestr = "Hi < my name is anthon string & chars > with spec chars & other bla bla";
  TagRemover tr(test);
  string s = tr.getText();
  if (s == truestr)
    cout << "Special Chars Success" << endl;
  else
    cout << "Special Chars Failed" << endl;
}

int main() {
  testTagRemove();
  testRemoveSpecialChars();
  TagRemover tr(cin);
  tr.print(cout);
}