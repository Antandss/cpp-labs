#include<iostream>
#include"coding.h"
#include<sstream>
#include<fstream>
#include<string>


using namespace std;

/*
int main(int argc, const char** argv){
string line; 
string code = "";
string file{argv[1]};
    ifstream input (file + ".enc");
if(input.is_open()){
    while(getline(input,line)){
        for(auto c: line){
            code += decode(c);
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
       s = decode(s);
       cout<< s << endl;
    }
    return 0; 
}