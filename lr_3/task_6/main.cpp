#include <iostream>
#include <cstdio>
#include <fstream>
#include "worker.h"

using namespace std;

size_t countSize(const char* FILENAME) {
    size_t size = 0;
    try {
        fstream file(FILENAME);
        file.seekg (0, std::ios::end);
        size = file.tellg();
        file.close();
    } catch (exception err) {
        cout << err.what();
    }
    
    return size - 1;
}

void fillFileBool(const char* FILENAME, 
            bool value, size_t& size) {
    fstream file(FILENAME);
    file << string(size, to_string(value)[0]); // Заполняет файл значениями value.
    file.close();
}

void fillFileByRandom(const char* FILENAME, size_t& size) {
    fstream file(FILENAME);
    for(size_t i = 0; i < size; i++)
        file << (char)(rand() % 255);
    file.close();
}

void removeFile(const char* FILENAME) {
    size_t size = countSize(FILENAME);

    if(size == -1)
        return;
    fillFileBool(FILENAME, 1, size);
    fillFileBool(FILENAME, 0, size);
    for(size_t i = 0; i < 5; i++)
        fillFileByRandom(FILENAME,size);
    if(remove(FILENAME) == -1) 
        throw invalid_argument("Can't remove file");
    
    cout << "\nfile \"" << FILENAME << "\" successfully deleted!";
}

void showWorker() {
    auto worker = Worker("Stepan", "manager", 678.234);
    cout << "Worker:" << endl;
    cout << "Name: " << worker.getName() << endl;
    cout << "Position: " << worker.getPosition() << endl;
    cout << "Salary: " << worker.getSalary() << endl;
}

int main(int argc, char *argv[]) {
    showWorker();

    try {
        // Имя файла задается через коммандную строку.
        removeFile(argv[1]);
    } catch(...) {
        cout << "File not exist!";
    }
    return 0;
}
