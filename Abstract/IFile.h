#ifndef FILE_EDITOR_IFILE_H
#define FILE_EDITOR_IFILE_H

#include <string>

using namespace std;

class IFile {
public:
    virtual void Create(string path) = 0;
    virtual void Open(string path) = 0;
    virtual void Save() = 0;
    virtual void SaveAs(string path) = 0;
    virtual void Print() = 0;
    virtual void Close() = 0;
};


#endif //FILE_EDITOR_IFILE_H
