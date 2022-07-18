#include <iostream>
#include <string>

class input_output{
    std::string input;
    std::string output;
    public:
int open_chat(bool status){
while (status == true) {
std::cin>>input;
std::cout<<output;
 };

};


};

int main(){
bool signal;
signal = true; //delete later
input_output in_out;
if(signal == true){
    std::cout<<"conectected\n";
   in_out.open_chat(true);

  };
};

