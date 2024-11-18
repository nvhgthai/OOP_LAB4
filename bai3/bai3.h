
#ifndef GIASUC_H_INCLUDED
#define GIASUC_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class giasuc{
public:
    virtual string speak() {};
    virtual int breed() {};
    virtual int milk() {};
};


#endif // GIASUC_H_INCLUDED

#ifndef COW_H_INCLUDED
#define COW_H_INCLUDED

class COW : public giasuc{
private:
       int num;
public:
     COW() {
        num=1;
     }
     string speak() override{
        return "Bo bo bo";
    }
    int breed() override{
        int sl=0;
        for(int i=1; i<=num; i++) sl+= abs(rand())%6;
        this->num+= sl;
        return sl;
    }
    int milk() override{
        int lit=0;
        for(int i=1; i<=num; i++) lit+= abs(rand())%21;
        return lit;
    }
};


#endif // COW_H_INCLUDED

#ifndef SHEEP_H_INCLUDED
#define SHEEP_H_INCLUDED

class SHEEP : public giasuc{
private:
       int num;
public:


     SHEEP() {
        num=1;
     }
     string speak() override{
        return "Cuu cuu cuu";
    }
    int breed() override{
        int sl=0;
        for(int i=1; i<=num; i++) sl+= abs(rand())%6;
        this->num+= sl;
        return sl;
    }
    int milk() override{
        int lit=0;
        for(int i=1; i<=num; i++) lit+= abs(rand())%6;
        return lit;
    }
};


#endif // SHEEP_H_INCLUDED


#ifndef GOAT_H_INCLUDED
#define GOAT_H_INCLUDED

class GOAT : public giasuc{
private:
       int num;
public:


     GOAT() {
        num=1;
     }
     string speak() override{
        return "De de de";
    }
    int breed() override{
        int sl=0;
        for(int i=1; i<=num; i++) sl+= abs(rand())%6;
        this->num+= sl;
        return sl;
    }
    int milk() override{
        int lit=0;
        for(int i=1; i<=num; i++) lit+= abs(rand())%11;
        return lit;
    }
};


#endif // GOAT_H_INCLUDED