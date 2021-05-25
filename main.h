#ifndef UNTITLED4_MAIN_H
#define UNTITLED4_MAIN_H

struct complex{
    double Num_1;//Целая часть
    double Num_2;//Мнимая часть
};

using namespace std;
//Сложение
complex operator+ (complex a, complex b) {
    complex result;
    result.Num_1 = a.Num_1 + b.Num_1;
    result.Num_2 = a.Num_2 + b.Num_2;
    return result;
};

//Вычитание
complex operator- (complex a, complex b) {
    complex result;
    result.Num_1 = a.Num_1 - b.Num_1;
    result.Num_2 = a.Num_2 - b.Num_2;
    return result;
};

//Умножение
complex operator* (complex a, complex b) {
    complex result;
    result.Num_1 = (a.Num_1 * b.Num_1) - (a.Num_2 * b.Num_2);
    result.Num_2 = (a.Num_1 * b.Num_2) + (a.Num_2 * b.Num_1);
    return result;
};

//Деление
complex operator/ (complex a, complex b) {
    complex result;
    result.Num_1 = (a.Num_1 * a.Num_1)+(a.Num_2 * a.Num_2);
    if (result.Num_1 == 0) {
        cout <<"Error!"<<endl;
        result.Num_2 = 0;}
    else {
        result.Num_2 = int(((a.Num_1 * b.Num_1) - (a.Num_2 * b.Num_2))/result.Num_1);
        result.Num_1 = int(((a.Num_1 * b.Num_1) + (a.Num_2 * b.Num_2))/result.Num_1);

    }
    return result;
}
//Вывод
ostream& operator<< (ostream& out, complex result) {

    if (result.Num_1 == 0) {
        if (result.Num_2 == 0) {out <<'0';}
        else {out << result.Num_2 <<'i';}}
    else if (result.Num_2 ==0) {out << result.Num_1 ;}
    else if (result.Num_2 < 0) {out << result.Num_1 <<result.Num_2<<'i';}
    else {out << result.Num_1 <<" + "<<result.Num_2<<'i';}
    return out;
}

#endif //UNTITLED4_MAIN_H
