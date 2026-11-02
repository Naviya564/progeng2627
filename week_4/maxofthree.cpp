# include <iostream>
int maxofthree (int one, int two, int three){
// not int one, two, three
//dont forget to type int before maxofthree

if ((one>two)&&(one>three)){
    return one;
    //means value assigned to one in the main will be the output
}

else if ((two>one)&&(two>three)){
    return two;
}

else if ((three>one)&&(three>two)){
    return three;
}
else{
return three;
}
//need this line cos function may not satisfy all the cases so it needs a fall back
}

int main (){
    int first, second, third;
    std::cin>>first>>second>>third;
    std::cout<<maxofthree(first,second,third)<<"is the maximum"<<std::endl;
}