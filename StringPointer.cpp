//
// Created by alexey on 14.09.16.
//

#include <string>

using  namespace std;

class StringPointer {
public:
    std::string *operator->() {

        if (!value){
            value  = new std::string();
            isBuild = true;
        }
        return value;

    }
     std::string operator *() {

         if (!value) {
             value  = new std::string();
             isBuild = true;
         }
         return *value;



    }
    StringPointer(std::string *Pointer) :value(Pointer) , isBuild(false) {}
    ~StringPointer() {


        if (isBuild && value)
            delete value;


    }

private:
    std::string* value;
    bool isBuild;

};