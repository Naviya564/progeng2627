# include <iostream>
# include <vector>
# include <fstream>
# include <cstdlib>
# include <string>

int main(){

    std::ifstream word;
    word.open ("string.txt");
    std::vector <std::string> v;
    //not just <string>

    if (word.is_open()){
        std::string tmp;
        while (word>>tmp){
            v.push_back(tmp);
        }
    }

    for (int i=v.size()-1; i>=0; i-- ){
        std::cout<<v[i]<<std::endl;
    }
    
}
