#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void lexer() {
    //tokens
    string keywords;
    string separators;
    string identifiers;
    string operators;
    string real;
    string punctuation;

    string holder;
    //Reads txt file
    ifstream ReadFile;
    ReadFile.open("input_sourcecode.txt");
    if(ReadFile.is_open()){
        //opens first line of txt file
        while(getline(ReadFile, holder)){
            //itr through first line
            for(int i = 0; i < holder.length(); i++) {
                //checks for specifics in the line (tokens/lexems)
                if(holder.at(i) == "while") {
                    keywords = "while";
                }else if(holder.at(i) == "for") {
                    keywords = "for";
                }else if(holder.at(i) == "i") {
                    identifiers = "i";
                }
            }
        }
    }        
}

