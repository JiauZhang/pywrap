#include <struct_internal.h>
#include <iostream>
#include <pybind11/pybind11.h>

namespace py = pybind11;

static Data data;

void show_data() {
    std::cout << data.name << "  "\
              << data.age  << std::endl;
}

void set_age(int age) {
    data.age = age;
}

PYBIND11_MODULE(struct_internal, m) {}