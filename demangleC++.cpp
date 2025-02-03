char demangleFromScratch(std::vector<std::string var){
    std::vector<char> vToCheck;
    std::vector<char> stringCheck;
    for(int i=0; i<var.size(); i++){
            vToCheck.push_back(var[i]);
        }
    if (var.size() == 1){
        if (var[0] == 'i'){
            return 'i';
        }
        else if (var[0] == 'd'){
            return 'd';
        }
        else if (var[0] == 'c'){
            return 'c';
        }
    }

    else{
        for (int j=0; j<var.size(); j++){
            if (var[j] == 's'){
                if (var[j+1]=='t'){
                    if (var[j+2]=='r'){
                        if(var[j+3]=='i'){
                            if(var[j+4]=='n'){
                                if(var[j+5]=='g'){
                                    return 's';
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            else{
                continue;
            }
        }
    }
}



//double is d
//int is i
//char is c

int main() {
    std::string hw = "hello";
    //The string to be 
    std::string mThing=typeid(hw).name();
    std::cout << demangleFromScratch(mThing);
    return 0;
}
