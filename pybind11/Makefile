CCFLAGS := -O3 -Wall -shared -std=c++11 -fPIC
CCFLAGS += -I$(CURDIR)/pybind11/include
CCFLAGS += -I/mnt/d/wslcache/env/anaconda3/include/python3.8
CCFLAGS += -I$(CURDIR)

# LDFLAGS := -L /usr/lib/x86_64-linux-gnu/

CC := g++
# $(info $(CC))

imath.so: add.cc
	$(CC) $^ -o $@ $(CCFLAGS) $(LDFLAGS)

struct_internal.so: struct_internal.cc struct_internal.h
	$(CC) $^ -o $@ $(CCFLAGS) $(LDFLAGS)

struct_wrapper.so: struct_wrapper.cc struct_internal.h struct_internal.so
	$(CC) struct_wrapper.cc struct_internal.h $(CURDIR)/struct_internal.so -o $@ $(CCFLAGS)

struct: struct_wrapper.so struct_internal.so