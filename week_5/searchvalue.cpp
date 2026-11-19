# include <iostream>
# include <vector>

int search_vector(int n, const std::vector<int>& vin){
    
    for (int i=0; i<vin.size();i++){
        
        if (vin[i]==n){
            return i;
        }
        
    }
    return -1;
    
}

int main (){
    std::vector<int>v;
    v.push_back(20);
    v.push_back(13);
    v.push_back(25);
    v.push_back(33);
    v.push_back(35);
    std::cout<<search_vector(33,v)<<std::endl;
}
