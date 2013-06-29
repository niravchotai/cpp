/*
 * fileSplit.cpp
 *
 *  Created on: Jun 29, 2013
 *      Author: nirav.chotai
 */
//File Splitter - This program split any file in n parts

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int parts = atoi(argv[2]);

    ifstream bigfile;
    bigfile.open(argv[1],ios::in | ios::binary);

    // get length of file:
    bigfile.seekg (0, ios::end);
    int length = bigfile.tellg();
    bigfile.seekg (0, ios::beg);

    int achunk = length/parts;

    vector<char> buffer (achunk);

    for (int i = 0; i < parts; i++)
    {
    	//Build File Name
        string partname = argv[1];
        string charnum;     //archive number
        stringstream out;
        out << "." << i;
        charnum = out.str();
        partname.append(charnum);  //put the part name together

        //chunking and writing to small files
        bigfile.read (&buffer[0], achunk);

        ofstream smallfile;
        smallfile.open(partname.c_str(),ios::out | ios::binary);
        smallfile.write (&buffer[0], achunk);
        smallfile.close();
    }

   return 0;
}
