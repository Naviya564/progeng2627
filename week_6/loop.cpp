#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");
    //attempts to open file

    if(infile.is_open()){ 
        //returns true or false
        //() is cos its a function
        //if it manages to open file
        int tmp;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            //returns true or false
            //the loop continues while reading succeeds
            // infile >> tmp means read the next value from the file stream infile and store it in tmp.
            std::cout << tmp << std::endl;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}