/*
 Задача #5: Структуры
 В программе заданы месяц и год двух дат. Пользователь вводит еще одну дату (только месяц и год. При этом год мб 4хзначным, а месяц мб 2х значное число или строка, пример 09.21 или 9.21, или 09.2021 ,или September 2021). Определить, принадлежит ли третья дата диапазону от первой даты до второй включительно. Задачу решить с использованием структуры данных.
 Если значение поля года введенной даты больше значения поля года первой даты и меньше поля года второй, то дата принадлежит диапазону.
 Иначе если год введенной даты совпадает с годом первой даты, то надо сравнить месяцы. Если месяц введенной даты больше или равен первой, то она принадлежит диапазону, иначе – нет.
 Если же год введенной даты совпадает с годом второй даты, то также надо сравнить месяцы. Дата будет принадлежать диапазону, если месяц введенной даты меньше или равен месяцу второй даты.
 Во всех остальных случаях введенная дата не будет принадлежать диапазону.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Data {
    string month1 = "1";
    string month2 = "12";
    string month3;
    string year1 = "10";
    string year2 = "20";
    string year3;
};
bool Belongto(Data data) {
    if (data.year3 < data.year2 && data.year3 > data.year1) {
        if (data.month3 < data.year2 && data.year3 > data.year1) {
    }
};
int main() {
    string str = "February 2015";
    int i = -1, flag =0;
    string timemonth = "", timeyear = "";
    Data data;
    vector<string> month = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };
    for(auto i=0;i<str.size();i++) {
        if (str[i] == '.') flag++;
    }
    if ( flag > 0) {
        while (str[i] != '.') {
            i++;
            if ( str[i] != '0') {
                timemonth += str[i];
            }
        }
        timemonth = timemonth.substr(0, timemonth.size()-1);
    }
    else {
        while (str[i] != ' ') {
            i++;
            timemonth += str[i];
        }
        timemonth = timemonth.substr(0, timemonth.size()-1);
        for(int i=0;i<month.size();i++) {
            if (month[i] == timemonth)
                timemonth = to_string(i+1);
        }

    }
    timeyear = str.substr(i+1);
    if (timeyear.size() == 4) {
        timeyear = str.substr(i+3);
    }
    data.month3 = timemonth;
    data.year3 = timeyear;
    cout << timemonth << "  " << timeyear << endl;
    return 0;
}
