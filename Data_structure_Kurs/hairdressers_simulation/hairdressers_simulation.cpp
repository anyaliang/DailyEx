#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

#define MAXSIZE 20

using namespace std;

//global variable
int customer_id  = 0;

//functions
void Init_customer(Customer &cu, level wanted){
    cu.no = customer_id;
    cu.barber_wanted_level = wanted;

    /*
    cout << "The customer " << customer_id + 1 << " wants ";
    switch(wanted){
        case 0 : cout << "level one barber." << endl; break;
        case 1 : cout << "level two barber." << endl; break;
        case 2 : cout << "level three barber." << endl; break;
    }
    */

    customer_id ++;
} //init customer with level wanted

void Init_barber(Barber &ba, level ba_level){
    ba.ba_level =  ba_level; 
    ba.status = false;
} //init with par level

void Change_ba_status(Barber &ba){
    if(ba.status) ba.status = false;
    else ba.status = true;
} //after serving

int Generate_customer_amount(){
    srand(time(0));
    int cu_amount = rand() % (100 - 20) + 10;
    cout << "The customers are coming..." << endl;
    cout << endl;

    sleep(2);

    return cu_amount;
}

//?
void Init_customer_list(Customer *cu_list, int cu_amount){
    Customer *p;
    p = cu_list;
    //p = new Customer[cu_amount];

    for(int i=0; i<cu_amount; i++){
        level level_wanted;
        int lw = rand() % (3 - 0);

        switch(lw){
            case 0: level_wanted = level_one; break;
            case 1: level_wanted = level_two; break;
            case 2: level_wanted = level_three; break;
        }

        Init_customer(*p, level_wanted);
        p++;
    }
    cu_list++;
}//generate customer list with ba

void Init_barber_list(Barber *ba_list, level ba_level){
    Barber *p;
    p = ba_list;

    for(int i=0; i<5; i++){
        Init_barber(*p, ba_level);
    }
}
void Allo_cu_to_ba(Customer *cu_list, int cu_amount, ){
    for(int i=0; i<cu_amount; i++){
        if(cu_list.barber_wanted_level==0){
            if()
        }
    }
}

int main(void){
    int cu_amount = Generate_customer_amount();
    Customer *cu_list;
    cu_list = new Customer[cu_amount];
    
    Init_customer_list(cu_list, cu_amount);

    LinkQueue level_one_queue;
    LinkQueue level_two_queue;
    LinkQueue level_three_queue;
    
    Init(level_one_queue);
    Init(level_two_queue);
    Init(level_three_queue);

    
    return 0;
}
