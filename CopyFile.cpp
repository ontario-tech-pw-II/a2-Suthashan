/*
Copying files using command lines
- Suthashan
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const* argv[]){
    //basically program reads in two files from command line and copys one of the file onto the other
    ifstream fin;
    ofstream fout;

    //makes sure that user typed in correct ammount of arguments
    if(argc <= 2 | argc < 3){ //argc counts from 1 like regular counting
        cout << "please type in 2 files" << endl;
        exit(1);
    }

    fin.open(argv[1]);
    //check to see if file opened correctly
    if(fin.fail()){ //there is a function called fail which checks if function failed to open
        cout << "input file failed to open" << endl;
    }

    fout.open(argv[2]);
    if(fout.fail()){
        cout << "output file failed to open" << endl;
    }
    string totalTemp;
    string temp;
    while(!fin.eof()){
        fin >> temp; //just like cin and cout how they read in from console using >> << arrows so does input and out files
        totalTemp += temp;
        totalTemp += " ";
    }

    fout << totalTemp;

    return 0;
}