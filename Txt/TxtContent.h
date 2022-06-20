#ifndef FILE_EDITOR_TXTCONTENT_H
#define FILE_EDITOR_TXTCONTENT_H

#include <string>

#include "../Abstract/Content.h"

using namespace std;

class TxtContent : public Content {
public:
    string content;

    string ToString() override {
        return std::string();
    }
};


#endif //FILE_EDITOR_TXTCONTENT_H
