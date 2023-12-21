#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<vector>
#include<typeinfo>
#include<algorithm>
using namespace std;


string nbrtrigrams(string word){
    string w = word; 
    string trigrams = ""; 
    std::transform(w.begin(), w.end(), w.begin(), ::tolower);
    string::size_type nbrTrigrams; 
        if(w.length() < 3)
            nbrTrigrams = 0;
        else{
            nbrTrigrams = w.size() - 2;
            vector<std::string> temp(nbrTrigrams);
        for(string::size_type i = 0; i < nbrTrigrams; i++)
                temp[i] = w.substr(i, 3);
            sort(temp.begin(), temp.end());
                for(const auto& t :temp)
                    trigrams += t + " ";
        }
    return w + " " + to_string(nbrTrigrams) + " " + trigrams;
}

int main(){
string s;
ifstream input("words");
ofstream output;
input.open("words.txt", ios::in);
output.open("outwords.txt", ios::out);
if(input.is_open()){
    while(getline(input,s)) {
            string trigram = nbrtrigrams(s);
            output << trigram << endl; 
       }
      input.close();
}
   else cout << "Unable to open file"; 
       return 0;
 


}

