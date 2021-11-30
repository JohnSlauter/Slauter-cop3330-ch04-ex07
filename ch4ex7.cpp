/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "ch4ex7.h"
#include "translator.cpp"
#include "translator.h"

using namespace ns;

int main(){

    cout << "Enter expression in the following format:" << endl << "Num1 Num2 Operation" << endl << "Only single digit numbers are supported." << endl;

    Translator translate;

    string temp_num1, temp_num2, temp_operation, result_name;

    double num1, num2, result;

    char opcode;

    try{

        cin >> temp_num1;
        
        cin >> temp_num2;

        cin >> temp_operation;

        num1 = translate.number_Search(str_To_Lowercase(temp_num1));

        num2 = translate.number_Search(str_To_Lowercase(temp_num2));

        opcode = translate.operation_Search(str_To_Lowercase(temp_operation));

        result_name = translate.result_Search(opcode);

        result = calculate(num1, num2, opcode);
        
    }

    catch(exception& err){

        cout << err.what();

        return 1;

    }

    cout << "The " << result_name << " of " << num1 << " and " << num2 << " is " << result << ".";

    return 0;

}

double ns::calculate(double num1, double num2, char opcode){

    switch(opcode){

        case '+':{

            return num1 + num2;

        }


        case '-':{

            return num1 - num2;

        }

        case '*':{

            return num1 * num2;

        }

        case '/':{

            return num1 / num2;

        }

        default:{

            throw runtime_error("Invalid Operation");

        }

    }

}

string ns::str_To_Lowercase(string str){

    string lowercase;

    for(string::iterator i = str.begin(); i < str.end(); i++){

        if('A' <= *i && *i <= 'Z'){

            lowercase += 'a' + (*i - 'A');

        }

        else{

            lowercase += *i;

        }

    }

    return lowercase;

}