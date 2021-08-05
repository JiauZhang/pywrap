#include <pybind11/pybind11.h>

namespace py = pybind11;

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

/*
    1st arg: module name --> export function: PyInit_<module_name>
    so the dynamic must be <module_name>.so 
*/
PYBIND11_MODULE(imath, m) {
    m.doc() = "pybind11 add example";
    
    m.def("add", &add, "A function whichs adds two numbers");
    m.def("sub", &sub, "A function whichs subs two numbers");
}