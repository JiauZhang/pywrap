#include <struct_internal.h>
#include <pybind11/pybind11.h>
#include <iostream>

namespace py = pybind11;

PYBIND11_MODULE(struct_wrapper, m) {
    std::cout << "struct_wrapper.so online." << std::endl;

    m.def(
        "show_data",
        []() {
            show_data();
        },
        "Show static data infomation."
    );

    m.def(
        "set_age",
        [](int age) {
            set_age(age);
        }
    );
}