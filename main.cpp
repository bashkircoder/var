#include <iostream>
#include <string>
#include <vector>
#include "String_Fucntions.h"
//Астахов Артем Сергеевич
/* Дан текстовый файл. В файле могут быть строки не того формата, что нам нужен. Формат строк придумайте сами.
Необходимо скопировать только правильные строки в массив. И вывести сколько было всего строчек,
 сколько правильных, сколько неправильных. Я проверяю строки на пристутсвие чисел.
 * */

using namespace std;



int main() {
    int count = 0;
    int count_copy = 0;
    string input_path = "D:\\Study\\1611Class\\var.txt";
    string output_path = "D:\\Study\\1611Class\\AgreementVars.txt";
    vector<string> var;
    var = GetVarFromText(input_path);

    var = VarValidation(var);
    CopyVarToFile(var, output_path);


    return 0;
}
