#ifndef FILE_EDITOR_XMLFILE_H
#define FILE_EDITOR_XMLFILE_H

#include <string>
#include <fstream>

#include "../Abstract/File.h"
#include "XmlContent.h"

using namespace std;

class XmlFile : public File {
public:
    void Create(string path) override {
        _path = path;
        _content = new XmlContent();
    }

    void Open(string path) override {
        //
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
        //
    }

    string ToString() override {
        // возврат содержимого _content
    }

};


#endif //FILE_EDITOR_XMLFILE_H
