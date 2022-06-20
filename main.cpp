#include <string>

#include "CLI.h"

#include "Abstract/File.h"

#include "Txt/TxtFile.h"
#include "Xml/XmlFile.h"

using namespace std;

int main() {

    File* file;

    CLI::ShowMessage("Type files: ");
    CLI::ShowMessage("1. txt");
    CLI::ShowMessage("2. xml");
    int select;
    select = stoi(CLI::Input("Enter type file: "));
    switch (select) {
        case 1:
            file = new TxtFile();
            break;
        case 2:
            file = new XmlFile();
            break;
        default:
            file = nullptr;
            break;
    }

    // Работа с файлом: открыть, сохранить и т.п.
    file->Create("");
    CLI::ShowMessage(file->GetContent()->ToString());

    return 0;
}
