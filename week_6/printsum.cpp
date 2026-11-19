# include <iostream>

# include <fstream>

int main(){


std::ifstream whitespace;
whitespace.open("whitespace.txt");

if (whitespace.is_open()){

int tmp;
int sum=0;


while (whitespace>>tmp){
   std::cout<<tmp<<std::endl;
    sum=tmp+sum;
}
std::cout<<sum<<std::endl;
whitespace.close(); 
}

else{
    std::cout<<"error opening file"<<std::endl;
}

}
