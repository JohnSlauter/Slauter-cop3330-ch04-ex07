/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "translator.h"

Translator::Translator(){

    initialize_Operation_Table();

    initialize_Number_Table();

    initialize_Result_Table();

}

void Translator::initialize_Operation_Table(){

    operation_table["+"] = '+';

    operation_table["plus"] = '+';

    operation_table["-"] = '-';

    operation_table["minus"] = '-';

    operation_table["*"] = '*';

    operation_table["mul"] = '*';

    operation_table["/"] = '/';

    operation_table["div"] = '/';

}

void Translator::initialize_Number_Table(){

    for(int i = 0; i < 10; i++){

        number_table[to_string(i)] = i;

    }

    number_table["zero"] = 0;

    number_table["one"] = 1;

    number_table["two"] = 2;

    number_table["three"] = 3;

    number_table["four"] = 4;

    number_table["five"] = 5;

    number_table["six"] = 6;

    number_table["seven"] = 7;

    number_table["eight"] = 8;

    number_table["nine"] = 9;

}

void Translator::initialize_Result_Table(){

    result_table['+'] = "sum";

    result_table['-'] = "difference";

    result_table['*'] = "product";

    result_table['/'] = "dividend";

}

char Translator::operation_Search(string op){

    if(operation_table.count(op) == 0){
        
        throw runtime_error("Invalid Operation.");

    }
    
    return operation_table[op];

}

int Translator::number_Search(string num){

    if(number_table.count(num) == 0){

        throw runtime_error("Invalid Number.");

    }

    return number_table[num];

}

string Translator::result_Search(char opcode){

    if(result_table.count(opcode) == 0){

        throw runtime_error("Invalid Operation.");

    }

    return result_table[opcode];

}
