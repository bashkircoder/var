#ifndef INC_1611CLASS_STRING_FUCNTIONS_H
#define INC_1611CLASS_STRING_FUCNTIONS_H
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> GetVarFromText(string path, int* count_total) {
    *count_total = 0;
    vector<string> var;
    ifstream file;
    file.open(path);
    while (!file.eof()) {
        string str;
        getline(file, str);
        var.push_back(str);
        *count_total+=1;
    }
    file.close();
    return var;
}

vector<string> VarValidation(vector<string> var, int* count){
    string str; bool status = true;
    *count = 0;
    for (int i = 0; i < var.size(); ++i) {
        str = var[i];
        for (int j = 0; j < str.size(); ++j) {
            if (str[j] == '-' || str[j] == ' '){
                status = false;
                str[j] = '_';

            }
        }
        if (status == false) *count+=1;
        var[i] = str;
        str.clear();
        status = true;
    }
    return var;
}

void CopyVarToFile(vector<string> var, string output_path){
    ofstream file;
    file.open(output_path, ios_base::trunc);
    for (int i = 0; i < var.size(); ++i) {
        file << var[i] << endl;
    }


    file.close();
}





#endif //INC_1611CLASS_STRING_FUCNTIONS_H
