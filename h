#pragma once
#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

//Класс точки
class Point {
public:
    int x, y;
    Point(int x, int y);
    string toString() const;
    void print() const;
};

//Класс линии
class Line {
public:
    Point start;
    Point end;
    Line(Point s, Point e);
    string toString() const;
    int length() const;
    void print() const;
};

//Классный студент
class Student {
public:
    string name;
    vector<int> marks;

    Student(string name, vector<int> marks);
    string toString() const;
    void print() const;
};

#endif
