# include <iostream>
# include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for (int i=0; i<vin.size(); i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main (){
    std::vector<double>v;
    std::vector<double>vout;

    v.push_back(12);
    v.push_back(5);
    v.push_back(13);
    v.push_back(2);
    v.push_back(3);

    double t=5;


    filter_v(v,t,vout);

    for (int i=0; i<vout.size(); i++){
    std::cout<<vout[i]<<std::endl;
    }

}