#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>

using std::string;
using std::vector;
using namespace std;



int main(){
    /*
   Parsera texten, hitta < och > 
    Ta bort allt mellan < och >
    returnera 
    */
   string s;
   string x;
   ifstream input("test.html");
   vector<int> pos;
   vector<string> word;
   
    if(input.is_open()){
		while(getline(input,s)){
            stringstream ss(s);
            ss >> x;
              while(x.find("<") != string::npos){
                auto start = x.find("<");
                auto end = x.find(">") + 1;
            if(end != string::npos){
                x.erase(start, end - start);
            }
            
              }
                cout<<x<<'\n';
            return 0;
    }
   }
}
