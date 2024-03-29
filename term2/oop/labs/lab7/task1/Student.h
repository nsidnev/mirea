#pragma once

#include <ctype.h>
#include <iostream>

#include "Human.h"

using namespace std;

namespace labs_space {
class Student : public Human {
private:
    bool on_lesson;

public:
    Student();
    Student(string name, string surname, string midname, int age, bool on_lesson);
    ~Student();
    void print() const;
};
} // namespace labs_space
