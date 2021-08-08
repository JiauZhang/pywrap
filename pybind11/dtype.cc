#include <iostream>
#include <pybind11/pybind11.h>

namespace py = pybind11;

class Pet {
public:
    Pet(const std::string &name) : name(name) { }
    void setName(const std::string &name_) {
        std::cout << "c++ setName" << std::endl;
        name = name_;
    }
    const std::string &getName() const {
        std::cout << "c++ getName" << std::endl;
        return name;
    }

private:
    std::string name;
};

PYBIND11_MODULE(dtype, m) {
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &>())
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName);
}