#include <iostream>
#include <string>
#include <vector>
#include "String_Fucntions.h"
//Астахов Артем Сергеевич


using namespace std;



int main() {
    int count;
    int count_total;
    string input_path = "D:\\Study\\1611Class\\var.txt";
    string output_path = "D:\\Study\\1611Class\\AgreementVars.txt";
    vector<string> var;
    var = GetVarFromText(input_path, &count_total);

    var = VarValidation(var, &count);
    CopyVarToFile(var, output_path);
    cout << "Wrong variables: " << count << endl;
    cout << "Total variables: " << count_total << endl;

    return 0;
}
