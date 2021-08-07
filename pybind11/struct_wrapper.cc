#include <struct_internal.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(Data, data) {
    data.def(
        "show_data",
        []() {
            show_data();
        },
        "Show static data infomation."
    );

    data.def(
        "set_age",
        [](int age) {
            set_age(age);
        }
    );
}