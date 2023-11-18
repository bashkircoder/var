#ifndef INC_1611CLASS_STRING_FUCNTIONS_H
#define INC_1611CLASS_STRING_FUCNTIONS_H
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> GetVarFromText(string path) {
    vector<string> var;
    ifstream file;
    file.open(path);
    while (!file.eof()) {
        string str;
        getline(file, str);
        var.push_back(str);
    }
    file.close();
    return var;
}

vector<string> VarValidation(vector<string> var){
    string str;
    for (int i = 0; i < var.size(); ++i) {
        str = var[i];
        for (int j = 0; j < str.size(); ++j) {
            if (str[j] == '-' || str[j] == ' '){
                str[j] = '_';
            }
        }
        var[i] = str;
        str.clear();
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
