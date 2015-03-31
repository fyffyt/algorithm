#include <iostream>

using namespace std;

#pragma pack(push,alignment_1,1)
#pragma pack(push,alignment_2,2)
#pragma pack(push,alignment_4,4)
#pragma pack(push,alignment_8,8)
#pragma pack(push,alignment_16,16)

struct s2 {
    char a;
    int b;
    char c;
    int d;
};

struct s3 {
    int a;
    int b;
    char c;
    char d;
};

struct A {
    bool a;
public:
    int b;
private:
    char c;
    unsigned d;
};

class B {
    int b;
public:
    unsigned d;
    operator double() const{
        return (double)b;
    }
private:
    bool a;
    char c;
};


int main(){
    cout<< sizeof(bool) << endl;
    cout<< sizeof(A) << endl;
    cout<< sizeof(B) << endl;
    B b;
    cout << 1.1 + b << endl;

    return 0;
}
