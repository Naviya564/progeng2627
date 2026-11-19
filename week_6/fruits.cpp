# include <iostream>
# include <vector>
# include <cstdlib>
# include <fstream>
# include <string>


int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i=0; i<vin.size(); i++){
        if (vin[i]==s){
           return i;
        }
    }
  return -1;
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
vout=vin1;
for (int i=0; i<vin2.size();i++ ){
    while (search_vector(vin2[i], vin1)==-1){
        vout.push_back(vin2[i]);
    }

}

    
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
for (int i=0; i<vin1.size();i++){
    while(search_vector(vin1[i],vin2)>=0){
        vout.push_back(vin1[i]);
    }
}

}


int main(){
std::ifstream warehouse1;
warehouse1.open("warehouse1.txt");
std:: vector <std::string>v1;


if(!warehouse1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;

    while(warehouse1 >> tmp){
        v1.push_back(tmp); 
    }

    warehouse1.close(); 


std::ifstream warehouse2;
warehouse2.open("warehouse2.txt");
std::vector<std::string>same; 
std::string tmp2;
std::vector<std::string>v2;

while (warehouse2>>tmp2){
    v2.push_back (tmp2);
}

std::ofstream intersection;
intersection.open ("intersection.txt");
   intersection_vector (v1,v2,same);

 if(!intersection.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
for (int i=0; i<same.size(); i++){
       intersection <<same[i] << std::endl;
//cannnot print <<intersection_vector(v1,v2,same)
   }

   intersection.close();

    std::vector<std::string>total;

   union_vector (v1,v2,total);
    
   std::ofstream unions;
    unions.open("unions.txt");
    if(!unions.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
   
for (int i=0; i<total.size();i++){
unions<<total[i]<<std::endl;
}

unions.close();

}



