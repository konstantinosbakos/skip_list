#include <iostream>

#include "../src/skip_list.hpp"

bool coin_toss(){
    return rand()%2;
}

int main(){
    srand(time(0));

    int        flag     = 1;
    skip_node     *rm_block = NULL;
    skip_list *SL       = new skip_list();

    while(flag){
        int ID     = -1;
        int choice = -1;

        std::cout << std::endl;
        std::cout << "Actions: " << std::endl;
        std::cout << "1: Insert" << std::endl;
        std::cout << "2: Search" << std::endl;
        std::cout << "3: Remove" << std::endl;
        std::cout << "4: Print " << std::endl;
        std::cout << "5: Exit  " << std::endl;
        std::cout << ">> ";

        std::cin >> choice;
        std::cout << std::endl;

        switch(choice){
            case 1:
                std::cin >> ID;
                SL->insert(ID);
                break;
            case 2:
                std::cin >> ID;

                std::cout << std::endl;

                if(SL->search(ID)){
                    std::cout << ">> True" << std::endl;
                }
                else{
                    std::cout << ">> False" << std::endl;
                }
                break;
            case 3:
                std::cin >> ID;
                rm_block = SL->remove(ID);

                delete rm_block;
                rm_block = NULL;

                break;
            case 4:
                SL->print();
                break;
            case 5:
                flag = 0;
                break;
            default:
                std::cout << "Wrong Input." << std::endl;
                break;
        }
    }

    delete SL;
    SL = NULL;

    return EXIT_SUCCESS;
}