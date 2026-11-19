#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::string name; 
    std::cout<<"give me the name of the file"<<std::endl;
    std::cin>>name;
    std::ifstream infile; 
    infile.open(name);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    std::string tmp;
    //string is how the file is read, so now can read files with words and numbers (will be read as string)

    for(int i = 0; i < 10; i++){
        std::getline(infile, tmp);
        std::cout << tmp << std::endl;
    }
    //usually files with words have a space and it will be printed as a new line. this code prints the file such that each line is printed properly
/*
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
*/

    infile.close();
}