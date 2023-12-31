#include "Tagremover.h"
#include <iostream>
#include <regex>
#include <algorithm>

using std::ostream;
using std::istream;
using std::string;
using std::regex_replace;
using std::regex;
using std::getline;

TagRemover::TagRemover(istream& is) {
  string line;
  while(getline(is, line))
    text += line + "\n";
  removeAll(text);
}

TagRemover::TagRemover(const string& s): text(s) {
  removeAll(text);
}

void TagRemover::removeAll(string& text) {
  removeTags(text);
  specialChars(text);
}

void TagRemover::print(ostream& os) const {
  os <<  text;
}

string TagRemover::getText() const {
  return text;
}

void TagRemover::specialChars(string& text) {
  regex replace_spec ("&amp;");
  text = regex_replace (text, replace_spec, "&");
  regex replace_spec1 ("&lt;");

  text = regex_replace (text, replace_spec1, "<");
  regex replace_spec2 ("&gt;");

  text = regex_replace (text, replace_spec2, ">");
  regex replace_spec3 ("&nbsp;");

  text = regex_replace (text, replace_spec3, " ");
}

void TagRemover::removeTags(string& text) {
  regex tag_remove (" <[^>]*>");
  text = regex_replace (text, tag_remove, "");
}

int main(){
  
}