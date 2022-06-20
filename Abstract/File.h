#ifndef FILE_EDITOR_FILE_H
#define FILE_EDITOR_FILE_H

#include <string>

#include "Content.h"
#include "IFile.h"

using namespace std;

class File : public IFile {
protected:
    string _path;
    Content* _content;

public:
    Content* GetContent() {
        return _content;
    }
};


#endif //FILE_EDITOR_FILE_H
