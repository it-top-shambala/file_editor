#ifndef FILE_EDITOR_TXTFILE_H
#define FILE_EDITOR_TXTFILE_H

#include <string>
#include <fstream>

#include "../Abstract/File.h"
#include "TxtContent.h"

using namespace std;

class TxtFile : public File {
public:
    void Create(string path) override {
        _path = path;
        _content = new TxtContent();
    }

    void Open(string path) override {
        _path = path;
        TxtContent* tempContent = new TxtContent();
        string temp;

        ifstream file(_path);

        if (file.is_open()) {
            while (!file.eof()) {
                getline(file, temp);
                tempContent->content += temp;
            }
        }

        _content = tempContent;
    }

    void Save() override {
        //
    }

    void SaveAs(string path) override {
        _path = path;
        Save();
    }

    void Print() override {
        //
    }

    void Close() override {
        Save();
    }

    string ToString() override {
        // возврат содержимого _content
    }
};

#endif //FILE_EDITOR_TXTFILE_H
