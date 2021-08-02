from ctypes import (
        CDLL, Structure,
        c_int, POINTER,
)

slib = CDLL('./struct_internel.so')

class Point(Structure):
    _fields_ = [('x', c_int), ('y', c_int)]

point = Point(1, 2)
print('python init struct (x, y) = ({}, {})'.format(point.x, point.y))

print_point = slib.print_point
print_point.argtypes = [POINTER(Point)]
print('call c function to print point info')
print_point(point)

create_point = slib.create_point
create_point.argtypes = [c_int, c_int]
create_point.restype = POINTER(Point)
x, y = 5, 6
print('call c function to create new point struct (x, y) = ({}, {})'.format(x, y))
res_pointer = create_point(c_int(x), c_int(y))
new_point = res_pointer.contents
print('use python to print new point info')
print('new point info (x, y) = ({}, {})'.format(new_point.x, new_point.y))
print(res_pointer, new_point._b_base_, new_point._fields_)
