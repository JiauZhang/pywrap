from ctypes import CDLL

hlib = CDLL('./hello.so')

hlib.hello()
