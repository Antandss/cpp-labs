#ifndef DICTIONARY_H
#define DICTIONARY_H
#define WORD_SIZE 25
#include <string>
#include <vector>
#include<unordered_set>
#include "word.h"

class Dictionary {
public:
	Dictionary();
	
	bool contains(const std::string& word) const;
	std::vector<std::string> get_suggestions(const std::string& word) const;
	void rank_suggestions(std::vector<std::string>& suggestions, const std::string word) const;
	void trim_suggestions(std::vector<std::string>& suggestions) const;
	unsigned int levenshteinDistance(const std::string word, const std::string suggestion) const;
private:
void add_trigram_suggestions(std::vector<std::string>& suggestions, const std::string word) const;
std::vector<Word> words[WORD_SIZE];
std::unordered_set<std::string> dict;
};

#endif
