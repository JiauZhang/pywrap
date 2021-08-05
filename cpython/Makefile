CFLAGS := -fpic -shared
CFLAGS += -I/mnt/d/wslcache/env/anaconda3/include/python3.5m

LDFLAGS :=

spam.so: spammodule.c
	gcc  $^ -o $@ $(LDFLAGS) $(CFLAGS)