#include<iostream>
#include"coding.h"
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

/*
int main(int argc, const char** argv){
string line; 
string code = "";

string file{argv[1]};
    ifstream input (file);
if(input.is_open()){
    while(getline(input,line)){
        for(unsigned c: line){
            code += encode(c);
        }
        code += '\n';
    }
    input.close();
}

}
*/

int main(){
  unsigned char s; 
    while(cin>>std::noskipws >> s){
       s = encode(s);
       cout<< s << endl;
    }
    return 0; 
}
