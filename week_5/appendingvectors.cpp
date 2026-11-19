# include <iostream>
# include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    //vin1 and vin2 are constant reference so cant use push_back on them!


for (int i=0; i<vin1.size(); i++){
    vout.push_back(vin1[i]);
    //square brackets to access an element!!
}

for (int i=0; i<vin2.size();i++){
    vout.push_back(vin2[i]);
}

}

int main (){

std::vector<int>vin1;
vin1.push_back(10);
vin1.push_back(13);
vin1.push_back(15);
vin1.push_back(23);

std::vector<int>vin2;
vin2.push_back(22);
vin2.push_back(24);
vin2.push_back(13);

std::vector<int>v;
append_vectors(vin1,vin2,v);

for (int i=0; i<v.size(); i++){
std::cout<<v[i]<<std::endl;
}

}