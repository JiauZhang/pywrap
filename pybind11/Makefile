CCFLAGS := -O3 -Wall -shared -std=c++11 -fPIC
CCFLAGS += -I$(CURDIR)/pybind11/include
CCFLAGS += -I/mnt/d/wslcache/env/anaconda3/include/python3.5m

# LDFLAGS := -L /usr/lib/x86_64-linux-gnu/

CC := g++
# $(info $(CC))

imath.so: add.cc
	$(CC) $^ -o $@ $(CCFLAGS) $(LDFLAGS)