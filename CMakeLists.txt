cmake_minimum_required(VERSION 3.22)
project(file_editor)

set(CMAKE_CXX_STANDARD 14)

add_executable(file_editor main.cpp Abstract/IFile.h Abstract/File.h Abstract/Content.h Txt/TxtFile.h Txt/TxtContent.h Xml/XmlContent.h Xml/XmlFile.h CLI.h)
