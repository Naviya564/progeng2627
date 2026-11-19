# include <iostream>
# include <vector>

int min_vector_element(const std::vector<double>& vin){
   if (vin.size()==0){
        return -1;
    }
    
    else{
    int min=0;
    for (int i=1; i<vin.size(); i++){
         if (vin[i]<vin[min]){
            min=i;
        }
    }
    return min;
}
//The function starts by assuming index 0 contains the minimum. 
//It then checks each later element. If it finds a smaller value, it updates min_index. 
//The const reference means the function can inspect the vector without copying or changing it.

}


int main (){
    std::vector<double>v;
    v.push_back(22);
    v.push_back(9);
    v.push_back(20);
    v.push_back(30);

    std::cout<<min_vector_element(v);
}