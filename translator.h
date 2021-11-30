/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"

#ifndef translator_H
#define translator_H

class Translator{

    public:
            
        Translator();

        char operation_Search(string op);

        int number_Search(string num);

        string result_Search(char opcode);
        
    private:
        
        unordered_map<string, int> number_table;

        unordered_map<string, char> operation_table;

        unordered_map<char, string> result_table;

        void initialize_Operation_Table();

        void initialize_Number_Table();

        void initialize_Result_Table();

};

#endif