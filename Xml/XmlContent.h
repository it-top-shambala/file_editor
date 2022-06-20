#ifndef FILE_EDITOR_XMLCONTENT_H
#define FILE_EDITOR_XMLCONTENT_H

#include <string>
#include <map>

#include "../Abstract/Content.h"

using namespace std;

class XmlContent : public Content {
public:
    map<string, XmlContent> content;

    string ToString() override {
        //
        return std::string();
    }
};


#endif //FILE_EDITOR_XMLCONTENT_H
